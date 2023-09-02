#include "MemoryHandler/MemoryHandler.hpp"
#define PI 3.141592


int main(void){
    // std::cout<<"hello \n";
    memReader* _struct = _Struct(25, "hello world!\n");
    printf("%s", *(char**)_struct->getMemberAddresFromIndex(1));
}
