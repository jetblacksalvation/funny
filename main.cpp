#include <iostream>
#include <vector>
#include <cstdint>
struct memReader{
    unsigned char * rootAddressForObj = nullptr;
    std::vector<unsigned char> addrOffsetsForObject;
    // memReader * handleType(){};
    void * getMemberAddresFromIndex(size_t index){
        size_t offset =0;
        for(size_t x=0; addrOffsetsForObject[x]!= addrOffsetsForObject[index]; x++){
            offset +=addrOffsetsForObject[x];
        }
        unsigned char * pointer = rootAddressForObj+offset;
        return pointer;
    }

};
template<typename ...Args>
memReader * _Struct(Args...args){
    memReader * ptr = new memReader();
    int64_t size = 0;
    int dummy []= {(ptr->addrOffsetsForObject.push_back(sizeof(args)), size += sizeof(args),0)...};
    ptr->rootAddressForObj = (unsigned char*) malloc(size );
    unsigned char * iterPtr= ptr->rootAddressForObj;
    int dummy2 [] = {(*(Args*)iterPtr = args,iterPtr+=sizeof(args),0)...};
    return ptr;

};

int main(void){
    memReader* _struct = _Struct(10, 20);
    int value = *(int*)_struct->getMemberAddresFromIndex(1);
    printf("value is = %i", value);
}
