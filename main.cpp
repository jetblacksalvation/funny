#include "MemoryHandler/MemoryHandler.hpp"
#define PI 3.141592


int main(void){
    // std::cout<<"hello \n";
    memReader* _struct = _Struct(25, (char*)"hello world!\n");
    auto vec = _struct->getMemberDataFromIndex(2);
    _struct->_AllocNewMemberArray((sizeof(char)), *(int*)_struct->getMemberAddresFromIndex(0));
    char* buffer = (char*)_struct->getMemberAddresFromIndex(3);
    printf("give me the listing price for the car \n");
    fgets(buffer, *(int*)_struct->getMemberAddresFromIndex(0),stdin);
    int number = std::atoi(buffer);
    // printf("%s",buffer);
    printf("the number is %i\n",number);
    float lowestCost = (float(number) *85)/100;
    float highestCost = (lowestCost+500);
    printf("the lowest cost is %f",lowestCost);
    printf("the highest cost is %f",highestCost);
    printf("-------\n");
    printf("give me Radius!\n");
    fgets(buffer, *(int*)_struct->getMemberAddresFromIndex(0),stdin);
    float raidus = atof(buffer);
    float volume = ((4.0/3.0)*PI) *(raidus * raidus *raidus);
    printf("the volume is %f",volume);
    float surfaceArea = (4 *PI)*(raidus*raidus);
    printf("the surface area is %f",surfaceArea);
    printf("---------\n");
    printf("Yards to mow?\n");
    fgets(buffer, *(int*)_struct->getMemberAddresFromIndex(0),stdin);
    float yards = (atof(buffer)/5000)*30;
    printf("application fertilization count?\n");
    fgets(buffer, *(int*)_struct->getMemberAddresFromIndex(0),stdin);
    float fertilizationCost = atof(buffer)*30;
    printf("Trees to plant?");
    fgets(buffer, *(int*)_struct->getMemberAddresFromIndex(0),stdin);

    float treeCost = atof(buffer)*50;
    printf("the total cost is = %f", yards+fertilizationCost+treeCost);
}
