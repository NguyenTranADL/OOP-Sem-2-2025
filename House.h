#ifndef HOUSE_H
#define HOUSE_H

#include "Appliance.h"

class House {
private:
    Appliance** appliances; // Array of Appliance pointers
    int numAppliances;      // Number of appliances in the array

public:
    // Constructors
    House();
    House(int numAppliances);

    // Destructor
    ~House();

    // Methods
    bool addAppliance(Appliance* appliance);
    double getTotalPowerConsumption() const;

    // Getter
    int getNumAppliances() const;
};

#endif