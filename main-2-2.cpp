#include <iostream>
#include "TV.h"

    int main() {
        //Create an Appliance object
        TV tv(150,200);
        //Set power rating and status
        std::cout << "Power rating: " << tv.get_powerRating() <<  "W" << std::endl;
        std::cout << "Screen size: " << tv.getScreenSize() << std::endl;
        std::cout << " Is On: " << (tv.get_isOn() ? "Yes" : "No") << std::endl;
        std::cout << "Power consumption: " << tv.getPowerConsumption() << "W" << std::endl;
        //Turn on
        tv.get_isOn();
        std::cout << "After turning on, Is On: " << (tv.get_isOn() ? "Yes" : "No") << std::endl;
        std::cout << "Power consumption: " << tv.getPowerConsumption() << "W" << std::endl;
        //Change and check power consumption 
        //Change volume and check power consumption again
        tv.setScreenSize(300);
        std::cout << "After change the screen size to 300, the power consumption is: " << tv.getPowerConsumption() << "W" << std::endl;
        return 0;
}