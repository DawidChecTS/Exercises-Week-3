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

    /*    
    Dummy dummy("Weakling", 100, 12);
    std::cout << dummy.getName() << " has "
    << dummy.getHealth() << " health and "
    << dummy.getDemage() << " demage!";
    */

    /*
    Person dawid ("1996-04-15", "Dawid",
    "Chec", "Oluff Nillsonsvag 14",
    "433-36", "Partille");

    Person kateryna ("1998-12-02", "Kateryna",
    "Tonkopii", "Jarnvagsgatan 83",
    "333-32", "Gnosjö");
    
    std::cout << dawid.giveName() << std::endl;
    std::cout << kateryna.giveName() << std::endl;

    kateryna.ChangeAddress("Oluff Nillsonsvag 14", "433-36","Partille");
    std::cout << kateryna.giveAddress();
    
    kateryna.MoveInto(dawid);
    std::cout << kateryna.giveAddress();
    */

    int x = 10;
    x = 20;

    //std::cout << x << std::endl;
    // where the x "lives" (200x9924fffb5c)
    // give me the adress of x
    //std::cout << &x << std::endl;

    // a pointer is a variable that stores the address

    //int* p;
    //std::cout << p << std::endl;

    // connecting pointer to variable
    int y = 6;
    int* p = &y;
    *p = 7;

    std::cout << p;



    return 0 ;
}