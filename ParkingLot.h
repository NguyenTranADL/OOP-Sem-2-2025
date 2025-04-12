#ifndef PARKING_LOT_H
#define PARKING_LOT_H
#include <iostream>
#include <string>
#include "Vehicle.h"
using namespace std;

class ParkingLot : public Vehicle {
    private:
        int capacity;
        int currentOccupancy;
        Vehicle* vehicles;
    public:
        ParkingLot(int capacity);
        int getCount();
        void parkVehicle(Vehicle* vehicle);
        void unparkVehicle(int ID);
        int countOverstayingVehicles(int maxParkingDuration);
};
#endif