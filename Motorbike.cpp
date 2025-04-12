#include <iostream>
#include <ctime>
#include <string>
#include "Motorbike.h"
using namespace std;

Motorbike::Motorbike(int ID) : Vehicle(ID) {
    type = "Motorbike";
    time(&timeofEntry);
}

int Motorbike::getParkingDuration() {
    time_t timeofOut;
    return (int)(difftime(time(&timeofOut), timeofEntry) * 0.85);
}