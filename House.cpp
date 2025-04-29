#include "House.h"

House::House() : appliances(nullptr), numAppliances(0) {}

House::House(int numAppliances) : numAppliances(numAppliances) {
    appliances = new Appliance*[numAppliances];
    for (int i = 0; i < numAppliances; i++) {
        appliances[i] = nullptr; 
    }
}
House::~House() {
    delete[] appliances; 
    appliances = nullptr;
}
bool House::addAppliance(Appliance* appliance) {
    for (int i = 0; i < numAppliances; i++) {
        if (appliances[i] == nullptr) {
            appliances[i] = appliance;
            return true;
        }
    }
    return false;
}
double House::getTotalPowerConsumption() const {
    double total = 0.0;
    for (int i = 0; i < numAppliances; i++) {
        if (appliances[i] != nullptr) {
            total += appliances[i]->getPowerConsumption();
        }
    }
    return total;
}
int House::getNumAppliances() const {
    return numAppliances;
}