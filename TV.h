#ifndef TV_H
#define TV_H

#include "Appliance.h"

class TV : public Appliance {
    private:
    double screenSize;
    public:
//Constructor
    TV(int powerRating, double screenSize);
//Setter and getter
    void setScreenSize(double screenSize);
    double getScreenSize() const;

    double getPowerConsumption() override;
};
#endif 