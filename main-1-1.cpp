#include <iostream>
#include "Appliance.h"

int main() {
    //Create an Appliance object
    Appliance app;
    //Set power rating and status
    app.set_powerRating(100);
    std::cout << "Power Rating: " << app.get_powerRating() << "W" << std::endl;
    std::cout << "Is On: " << (app.get_isOn() ? "Yes" : "No") << std::endl;
    //Turn on the appliance
    app.turnOn();
    std::cout << "After turning on, Is On: " << (app.get_isOn() ? "Yes" : "No") << std::endl;
    //Turn off the appliance
    app.turnOff();
    std::cout << "After turning off, Is On: " << (app.get_isOn() ? "Yes" : "No") << std::endl;
    //Check power consumption
    std::cout <<  "Power Consumption: " << app.getPowerConsumption() << std::endl;
    return 0;
}
