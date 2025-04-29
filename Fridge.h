#ifndef FRIDGE_H
#define FRIDGE_H

#include "Appliance.h"

class Fridge : public Appliance {
    private:
    double volume;
    public:
//Construor
    Fridge(int powerRating, double volume);
//Getters and setters
    void setVolume(double volume);
    double getVolume() const;

    double getPowerConsumption() override;
};
#endif