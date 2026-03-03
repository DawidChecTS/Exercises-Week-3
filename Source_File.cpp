#include "Source_File.h"
#include <iostream> 
using namespace std; // to skip std::

// :: -> this is the scope resolution operator
// without it, the function is unreleted to the class
void Vehicle::start(){
    cout << "The vehicle is driving!" << endl;
}
void Vehicle::stop(){
    cout << "The vehicle has stopped. " << endl;
}
void Buss::openDorrs(){
    cout << "The doors are now opened!" << endl;
}
void Bicycle::cycle (){
    cout << "The bike does push push" << endl;
}