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

    // a pointer is variable that stores adress
    // of some other variable
    // & address-of operator
    // * dereference operator

    // Small session about the pointers

    /*
    std::string name = "Dawid";
    int age = 29;

    std::string *pName = &name;
    int *pAge = &age;
    
    std::string freePizzas[5] = {"Pizza1","Pizza2","Pizza3","Pizza4","Pizza5"};
    std::string *pfreePizzas = freePizzas; // in case of arrays no need of adress of operator

    std::cout << pName << '\n'; // stores the adress
    std::cout << *pName << '\n'; // accessing the value stored in the memory
    std::cout << pAge << '\n';
    std::cout << *pAge << '\n';
    std::cout << *freePizzas << '\n';
    std::cout << *(freePizzas+1) << '\n';
    std::cout << *(freePizzas+2) << '\n';
    std::cout << *(freePizzas+3) << '\n';
    std::cout << *(freePizzas+4) << '\n';

    // Small session about the references

    std::string x = "Kool-Aid";
    std::string y = "Water";

    swap(x, y);
    std::cout << "X: " << x << '\n';
    std::cout << "Y: " << y << '\n';
    */

    Graphics gameGraphics;
    gameGraphics.WelcomeScreen();
    gameGraphics.Menu();

    std::string playerName;
    std::cin >> playerName;

    Champion player(playerName, 100); 
    Enemy enemy("Huge Ork", 100);

    gameGraphics.BattleScreen(playerName, 100, "Huge Ork", 100);

    return 0 ;
}