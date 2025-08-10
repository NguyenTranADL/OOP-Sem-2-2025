#include "Robot.h"
#include <string>

std::string Robot::getName() const {return "Robot";}

bool Robot::beats(const Move* other) const {
    std::string otherName = other->getName();
    return otherName == "Scissors" || otherName == "Zombie" || otherName == "Ninja";
}