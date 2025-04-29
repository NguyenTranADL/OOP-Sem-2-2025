#include "Appliance.h"

//Default constructor
Appliance::Appliance() : powerRating(0), isOn(false) {}

//Getters 
int Appliance::get_powerRating() const { return powerRating; }
bool Appliance::get_isOn() const { return isOn; }

//Setters
void Appliance::set_powerRating(int rating) { powerRating = rating;}
void Appliance::set_isOn( bool status) { isOn = status;}

//Methods
void Appliance::turnOn() { isOn = true;}
void Appliance::turnOff() { isOn = false;}

//Virtual methods
double Appliance::getPowerConsumption() { return 0;}
//Appliance class does not have a power consumption value, so it returns 0.