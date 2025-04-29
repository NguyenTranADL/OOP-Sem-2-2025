#include <iostream>
#include "House.h"
#include "Fridge.h"
#include "TV.h"

int main() {
    // Create a House with space for 3 appliances
    House house(3);

    // Create appliances
    Fridge fridge(150, 200); // Power rating: 150W, Volume: 200 liters
    TV tv(120, 40);         // Power rating: 120W, Screen size: 40 inches

    // Add appliances to the house
    std::cout << "Adding Fridge: " << (house.addAppliance(&fridge) ? "Success" : "Failed") << std::endl;
    std::cout << "Adding TV: " << (house.addAppliance(&tv) ? "Success" : "Failed") << std::endl;

    // Check initial power consumption (both appliances are off)
    std::cout << "Total Power Consumption (both off): " << house.getTotalPowerConsumption() << "W" << std::endl;

    // Turn on appliances
    fridge.turnOn();
    tv.turnOn();

    // Check power consumption after turning on
    std::cout << "Total Power Consumption (both on): " << house.getTotalPowerConsumption() << "W" << std::endl;

    return 0;
}