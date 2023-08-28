#include "MemoryHandler/MemoryHandler.hpp"



int main(void){
    memReader* _struct = _Struct(10, 20, (char*)"hello world!\n");
    auto vec = _struct->getMemberDataFromIndex(2);
    _struct->_AllocNewMemberArray((sizeof(char)), 10);
    char* buffer = (char*)_struct->getMemberAddresFromIndex(3);
    printf("%s",buffer);
    for(auto byte : vec){
        printf("byte : %i ",byte);
    }
    printf("\n");

    // printf("value is = %i", value);
}
