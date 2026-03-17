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

// Adding a constructor
Warior::Warior(std::string n, double h, double s){
    name = n;
    health = h;
    swordHit = s;

}

Mage::Mage(std::string n, double h, double w){
    name = n;
    health = h;
    wandHit = w;
}

Archer::Archer(std::string n, double h, double a){
    name = n;
    health = h;
    arrowHit = a;
}

void Warior:: attack(){
    cout << "The Warior "  
    << name << " has " << health << 
    " health and attacks with "
    << swordHit << " damage!" << endl;
}

void Mage:: attack(){
    cout << "The Mage "
    << name << " has " << health << 
    " health and attacks with "
    << wandHit << " "
    << "damage!" << endl;
}

void Archer:: attack(){
    cout << "The Archer "
    << name << " has " << health << 
    " health and attacks with "
    << arrowHit << " "
    << "damage!" << endl;
}
