#include <iostream>
#include "Fridge.h"

int main() {
//Create a fridge object
    Fridge fridge(150,200);
//Display stats
    std::cout << "Power rating: " << fridge.get_powerRating() << "W" << std::endl;
    std::cout << "Volume: " << fridge.getVolume() << "litters" << std::endl;
    std::cout << "Is On: " << (fridge.get_isOn() ? "Yes" : "No") << std::endl;
    std::cout << "Power consumption: " << fridge.getPowerConsumption() << "W" << std::endl;
//Turn On and check power consumption
    fridge.get_isOn();
    std::cout << "After turning on, Is On: " << (fridge.get_isOn() ? "Yes" : "No" ) << std::endl;
    std::cout << "Power consumption: " << fridge.getPowerConsumption() << "W" << std::endl;
//Change volume and check power consumption again
    fridge.setVolume(300);
    std::cout << "After change the volume to 300, the power consumption is: " << fridge.getPowerConsumption() << "W" << std::endl;
    return 0;
}