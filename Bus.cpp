#include <iostream>
#include <ctime>
#include <string>
#include "Bus.h"
using namespace std;

Bus::Bus(int ID) : Vehicle(ID) {
    type = "Bus";
    time(&timeofEntry);
}

int Bus::getParkingDuration() {
    time_t timeofOut;
    return (int)(difftime(time(&timeofOut), timeofEntry) * 0.75);
}