#include "Robot.h"
#include "Ninja.h"
#include "Zombie.h"

bool Robot::beats(const Move& other) const {
    const std::string otherName = other.getName();
    return otherName == "Ninja" || otherName == "Zombie";
}