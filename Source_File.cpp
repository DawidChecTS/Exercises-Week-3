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

Dummy::Dummy(std::string n, int h, int d){
    name = n;
    health = h;
    demage = d;
}

void Dummy::setHealth(int h){
    if (h < 0){
        health = 0;
    }
    else if(h <= 100){
        health = h;
    }
    else {
        health = 100;
    }
}

void Dummy::setDemage(int d){
    if (d < 0){
        demage = 0;
    }
    else if(d <= 10){
        demage = d;
    }
    else {
        demage = 10;
    }
}

void Dummy::setName(std::string n){
    name = n;
}

int Dummy::getHealth(){
    return health;
}

int Dummy::getDemage(){
    return demage;
}

string Dummy::getName(){
    return name;
}

Person::Person(std::string b, std::string f,
    std::string l, std::string s, std::string p, 
    std::string c){

    BirthDate = b;
    FirstName = f;
    LastName = l;
    StreetAddress = s;
    PostalCode = p;
    City = c;
}

string Person::giveName(){
    return FirstName;
}

void Person::ChangeAddress(std::string s, std::string p, std::string c){
    
    StreetAddress = s;
    PostalCode = p;
    City = c;
}

string Person::giveAddress(){
    return StreetAddress + " " + PostalCode + " " + City;
}

void Person::MoveInto(const Person& a){
    StreetAddress = a.StreetAddress;
    PostalCode = a.PostalCode;
    City = a.City;
}

void test (int x){
    x = 100;
}

void swap(std::string &x, std::string &y){
    std::string temp = x;
    x = y;
    y = temp;
}

Champion::Champion(std::string n, int h){
    n = name;
    h = healthPoints;
}

Enemy::Enemy(std::string n, int h){
    n = name;
    h = healthPoints;
}

void Graphics::WelcomeScreen(){
    std::string welcome = "Welcome in the HERO of CIPLUS Game!";
    std::string enterName = "Enter your name Champion!: ";
    
    std::cout << welcome << '\n';
    std::cout << enterName << '\n';
}

void Graphics::Menu(){
    std::string gameName = "Hero of Ciplus";
    std::string space = "------------------------";
    std::string battleNextEnemy = "1. Battle the next enemy";
    std::string exitGame = "2. Exit game";
    std:string enterOption = "Enter option:";

    std::cout << '\n';
    std::cout << gameName << '\n';
    std::cout << space << '\n';
    std::cout << battleNextEnemy << '\n';
    std::cout << exitGame << '\n';
    std::cout << enterOption << '\n';
}

void Graphics::BattleScreen(std::string pn, int ph, std::string en, int eh){
    cout << '\n' << "<"<< pn << ">" << "                      "
     <<"<"<< en << ">" << '\n';
    cout << "HP: " << "<"<< ph << ">" << "                      "
    << "HP: " << "<" << ph << ">" << '\n';
    std::string space = "------------------------";
    std::string attack = "1. Attack";
    std::string admitDefeat = "2. Admit Defeat";
    std:string enterOption = "Enter option:";

    std::cout << space << '\n';
    std::cout << attack << '\n';
    std::cout << admitDefeat << '\n';
    std::cout << enterOption << '\n';
}

void Graphics::ExitPrompt(){
    std::cout << "You have chosen to exit the game." << '\n';
    std::cout << "Bye Bye and see you again!" << '\n';
}

int GamerChoice::checkIfInteger(int a){
    if (a > 0 && a < 3){
        return a;
    }
    else{
        return false;
    }
}

int Combat::Attack(int a, int b){
    return a - b;
    std::cout << "You have attacked the enemy with 10 dmg points!";
}

int Combat::CounterAttack(int a, int b){
    return a - b;
}