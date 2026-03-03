#include <iostream>
#include "Source_File.h"

int main(){
    Vehicle car1;
    Buss bus1;
    Bicycle bicycle1;

    car1.start();
    bus1.openDorrs();
    bus1.start();
    bicycle1.cycle();
    bicycle1.stop();

    return 0 ;
}