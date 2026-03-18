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
    virtual void attack() = 0; // pure virtual
    // It means that derived class MUST implement attack()
    
};

class Warior : public Character{
    public:
    double swordHit;
    // Adding a constructor
    Warior(std::string n, double h, double s);
    void attack() override;
};

class Mage : public Character{
    public:
    double wandHit;

    Mage(std::string n, double h, double s);
    void attack() override;
};

class Archer : public Character{
    public:
    double arrowHit;

    Archer(std::string n, double h, double s);
    void attack() override;
};

class Dummy {
    private :
    int health;
    int demage;
    std::string name;

    public:
    void setHealth(int h);
    void setDemage(int d);
    void setName(std::string n);

    int getHealth();
    int getDemage();
    std::string getName();


};

#endif