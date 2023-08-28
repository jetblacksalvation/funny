#include "MemoryHandler/MemoryHandler.hpp"



int main(void){
    memReader* _struct = _Struct(10, 20, (char*)"hello world!\n");
    auto vec = _struct->getMemberDataFromIndex(2);
    for(auto byte : vec){
        printf("byte : %i ",byte);
    }
    printf("\n");

    // printf("value is = %i", value);
}
