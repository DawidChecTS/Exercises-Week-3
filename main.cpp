#include <iostream>
#include "Source_File.h"

int main(){

    /*
    Character* warior = new Warior("Conanek", 100.0, 10.0);
    warior->attack();
    */

    /*
    Dummy dummy;
    dummy.setName("Dummycius");
    dummy.setHealth(100);
    dummy.setDemage(10);

    std::cout << dummy.getName() << " has "
    << dummy.getHealth() << " health and "
    << dummy.getDemage() << " demage!";
    */

    Dummy dummy("Weakling", 100, 12);
    std::cout << dummy.getName() << " has "
    << dummy.getHealth() << " health and "
    << dummy.getDemage() << " demage!";
    
    return 0 ;
}