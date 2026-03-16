#include "Source_File.h"
#include <iostream> 
using namespace std; // to skip std::

// :: -> this is the scope resolution operator
// without it, the function is unreleted to the class
void Vehicle::start(){cout << "The vehicle is driving!" << endl;}
void Vehicle::stop(){cout << "The vehicle has stopped. " << endl;}
void Car::openTrunk(){cout << "The car opens the trunk!" << endl;}
void Bicycle::cycle (){cout << "The bike does push push" << endl;}
void Bus::openDoors(){cout << "The doors are now opened!" << endl;}

void Song::printOutSummary(){
    cout << "Summary of this item: " 
    << title << ", " 
    << artist << ", "
    << duration << endl;
}
void Podcast::printOutSummary(){
    cout << "Summary of this item: " 
    << title << ", "
    << guest << ", " 
    << duration << endl;
}
void Audiobook::printOutSummary(){
    cout << "Summary of this item: " 
    << title << "," 
    << host <<", " 
    << duration << endl;
}

void Warrior::slashTheTarget(){
    cout << "The Warior " 
    << name << " attacks with "
    << swordHit << " "
    << "damage!" << endl;
}

void Mage::wandAttackTheTarget(){
    cout << "The Mage "
    << name << " attacks with "
    << wandHit << " "
    << "damage!" << endl;
}

void Archer::arrowSendToTarget(){
    cout << "The Archer "
    << name << " attacks with "
    << arrowHit << " "
    << "damage!" << endl;
}
