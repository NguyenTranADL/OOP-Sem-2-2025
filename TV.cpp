#include "TV.h"

TV :: TV(int powerRating,double screenSize){
    set_powerRating(powerRating);
    this -> screenSize =  screenSize;
    }
    void TV :: setScreenSize(double screenSize){
    this -> screenSize = screenSize;
    }
    double TV::getScreenSize() const {
        return screenSize;
    } 
    double TV::getPowerConsumption() {
        if (get_isOn()) {
            return get_powerRating() * (screenSize / 10);
        }
        return 0;
    }
