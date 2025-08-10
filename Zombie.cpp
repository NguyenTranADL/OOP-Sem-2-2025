#include "Zombie.h"
#include <string>

std::string Zombie::getName() const { return "Zombie";}

bool Zombie::beats(const Move* other) const {
    std::string otherName = other->getName();
    return otherName == "Monkey" || otherName == "Pirate" || otherName == "Rock";
}