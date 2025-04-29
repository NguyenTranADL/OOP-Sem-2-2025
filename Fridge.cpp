#include "Fridge.h"

Fridge :: Fridge(int powerRating, double volume) {
    set_powerRating(powerRating);
    this -> volume = volume;
}
void Fridge::setVolume(double volume) {
    this -> volume = volume;
}
double Fridge::getVolume() const {
    return volume;
}
double Fridge::getPowerConsumption() {
    if (get_isOn()) {
        return get_powerRating() * 24 * (volume/100.0);
    }
    return 0;
}