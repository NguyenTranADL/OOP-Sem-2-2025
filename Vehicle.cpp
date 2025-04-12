#include <iostream>
#include <string>
#include <ctime>
#include "Vehicle.h"
using namespace std;

Vehicle::Vehicle(){};
Vehicle::Vehicle(int ID){
    this->ID = ID;
    time(&timeofEntry);
}
int Vehicle::getID(){
    return ID;
}
int Vehicle::getParkingDuration(){
    time_t timeofOut;
    if(this->getType() == "Car"){
        return (int)(difftime(time(&timeofOut), timeofEntry)*0.9);
    } else if(this->getType() == "Bus"){
        return (int)(difftime(time(&timeofOut), timeofEntry)*0.75);
    } else if(this->getType() == "Motorbike"){
        return (int)(difftime(time(&timeofOut), timeofEntry)*0.85);
    }
    return 0;
}
string Vehicle::getType() {
    return type;
}