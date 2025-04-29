#ifndef APPLIANCE_H
#define APPLIANCE_H

class Appliance {
    private:
    int powerRating;
    bool isOn;
    public:
    Appliance();
//Getters
    int get_powerRating() const;
    bool get_isOn() const;
//Setters
    void set_powerRating(int rating);
    void set_isOn(bool status);
//Methods
    void turnOn();
    void turnOff();
//Virtual methods
    virtual double getPowerConsumption();
};
#endif