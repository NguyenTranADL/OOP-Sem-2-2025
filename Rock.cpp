#include "Rock.h"
#include <string>

std::string Rock::getName() const { return "Rock"; }

bool Rock::beats(const Move* other) const {
    std::string otherName = other->getName();
    return otherName == "Scissors" || otherName == "Monkey" || otherName == "Zombie";
}