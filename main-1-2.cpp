#include <iostream>
#include "ParkingLot.h"
#include "Vehicle.h"
#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"
using namespace std;

int main() {
    ParkingLot lot(10);  
    
    Car car1(1);
    Bus bus1(2);
    Motorbike bike1(3);
    Car car2(4);
    Bus bus2(5);
    Motorbike bike2(6);
    Car car3(7);
    Bus bus3(8);
    Motorbike bike3(9);
    Car car4(10);

    lot.parkVehicle(&car1);
    lot.parkVehicle(&bus1);
    lot.parkVehicle(&bike1);
    lot.parkVehicle(&car2);
    lot.parkVehicle(&bus2);
    lot.parkVehicle(&bike2);
    lot.parkVehicle(&car3);
    lot.parkVehicle(&bus3);
    lot.parkVehicle(&bike3);
    lot.parkVehicle(&car4);  

    int idToUnpark;
    cout << "Enter the ID of the vehicle to unpark: ";
    cin >> idToUnpark;
    lot.unparkVehicle(idToUnpark);

    cout << "Vehicles currently in the lot after unpark: " << lot.getCount() << endl;
    return 0;
}
