#include <string>
#include <iostream>
#include "ParkingLot.h"
using namespace std;

ParkingLot::ParkingLot(int maxCapacity) : capacity(maxCapacity), currentOccupancy(0) {
    vehicles = new Vehicle[capacity]; 
}

int ParkingLot::getCount() {
    return currentOccupancy;
}

void ParkingLot::parkVehicle(Vehicle* vehicle) {
    if (currentOccupancy < capacity) {
        vehicles[currentOccupancy] = *vehicle;
        currentOccupancy++;
    } else {
        cout << "The lot is full" << endl;
    }
}

void ParkingLot::unparkVehicle(int vehicleID) {
    for (int i = 0; i < currentOccupancy; i++) {
        if (vehicles[i].getID() == vehicleID) {
            for (int j = i; j < currentOccupancy - 1; j++) {
                vehicles[j] = vehicles[j + 1];
            }
            currentOccupancy--;
            return;
        }
    }
    cout << "Vehicle not in the lot" << endl;
}

int ParkingLot::countOverstayingVehicles(int maxParkingDuration) {
    int count = 0;
    for (int i = 0; i < currentOccupancy; i++) {
        if (vehicles[i].getParkingDuration() > maxParkingDuration) {
            count++;
        }
    }
    return count;
}