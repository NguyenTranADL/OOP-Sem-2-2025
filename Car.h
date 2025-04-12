#ifndef CAR_H
#define CAR_H
#include <iostream>
#include <string>
#include "Vehicle.h"
using namespace std;

class Car : public Vehicle {
    public:
        int getParkingDuration();
        Car(int ID) ;
};
#endif