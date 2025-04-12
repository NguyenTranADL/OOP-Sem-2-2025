#include <iostream>
#include <vector>
#include "Vehicle.h"
#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"
using namespace std;

int main() {
    Vehicle* car = new Car(101);
    Vehicle* bus = new Bus(102);
    Vehicle* motorbike = new Motorbike(103);

    cout << "Checking Car Details:\n";
    cout << "Car's Unique ID: " << car->getID() << "\n";
    cout << "Car's Parking Time: " << car->getParkingDuration() << " seconds\n";

    cout << "\nChecking Bus Details:\n";
    cout << "Bus's Unique ID: " << bus->getID() << "\n";
    cout << "Bus's Parking Time: " << bus->getParkingDuration() << " seconds\n";

    cout << "\nChecking Motorbike Details:\n";
    cout << "Motorbike's Unique ID: " << motorbike->getID() << "\n";
    cout << "Motorbike's Parking Time: " << motorbike->getParkingDuration() << " seconds\n";

    delete car;
    delete bus;
    delete motorbike;

    return 0;
}
