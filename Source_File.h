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

class Media {
    public:
    string title;
    double duration;

    void printOutSummary(string a);
};

class Song : public Media {
    public:
    string type = "Song";
    string artist;
};

class Podcast : public Media {
    public:
    string type = "Podcast";
    string Guest;
};

class Audiobook : public Media {
    public:
    string type = "Audiobook";
    string personReading;

};