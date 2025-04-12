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

    lot.parkVehicle(&car1);
    lot.parkVehicle(&bus1);
    lot.parkVehicle(&bike1);

    int maxParkingDuration = 15;

    int overstayingCount = lot.countOverstayingVehicles(maxParkingDuration);

    cout << "Number of vehicles overstaying for more than " << maxParkingDuration << " seconds: " << overstayingCount << endl;

    return 0;
}
