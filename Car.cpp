#include <iostream>
#include <string>
#include <ctime>
#include "Car.h"
using namespace std;

Car::Car(int ID) : Vehicle(ID) {
    type = "Car";
    time(&timeofEntry);
}

int Car::getParkingDuration() {
    time_t timeofOut;
    return (int)(difftime(time(&timeofOut), timeofEntry) * 0.9);
}