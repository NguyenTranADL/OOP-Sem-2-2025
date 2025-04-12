#ifndef VEHICLE_H
#define VEHICLE_H
#include <iostream>
#include <string>
using namespace std;

class Vehicle {
    protected:
        time_t timeofEntry;
        int ID;
        string type;
    public:
        Vehicle();
        Vehicle(int ID);
        int getID();
        int getParkingDuration();
        string getType();
};
#endif