#ifndef SOURCE_FILE_H
#define SOURCE_FILE_H
#include <string>

// Base class
class Vehicle {
public:
    std::string brand;
    double maxSpeed;
    void start();
    void stop();
};

// Derived class
class Car : public Vehicle {
public:
    void openTrunk();
};

// Derived class
// Public enheritance - members stay public
class Bicycle : public Vehicle {
public: 
    void cycle();
};

// Derived class
// Public enheritance - members stay public
class Bus : public Vehicle {
public:
    void openDoors();
};

class Media {
public:
    std::string title;
    double duration;
};

class Song : public Media {
public:
    std::string artist;
    void printOutSummary();
};

class Podcast : public Media {
public:
    std::string guest;
    void printOutSummary();
};

class Audiobook : public Media {
public:
    std::string host;
    void printOutSummary();
};

class Character{
    public:
    std::string name;
    double health;
    
};

class Warrior : public Character{
    public:
    double swordHit;
    void slashTheTarget();
};

class Mage : public Character{
    public:
    double wandHit;
    void wandAttackTheTarget();
};

class Archer : public Character{
    public:
    double arrowHit;
    void arrowSendToTarget();
};

#endif