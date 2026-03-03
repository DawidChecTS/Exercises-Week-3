#define SOURCE_FILE_H
#include <string>
#include <iostream> 
using namespace std;

// Base class
class Vehicle {
    public:
        string brand;
        double maxSpeed;

void start();
void stop();
};

// Derived class
// Public enheritance - members stay public
class Buss : public Vehicle {
    public:
    void openDorrs();
};
// Derived class
// Public enheritance - members stay public
class Bicycle : public Vehicle {
    public: 
    void cycle();

};