#include "Ninja.h"
#include <string>

std::string Ninja::getName() const {return "Ninja";}

bool Ninja::beats(const Move* other) const {
    std::string otherName = other->getName();
    return otherName == "Pirate" || otherName == "Zombie";
}