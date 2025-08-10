#include "Monkey.h"
#include <string>

std::string Monkey::getName() const {return "Monkey";}

bool Monkey::beats(const Move* other) const {
    std::string otherName = other->getName();
    return otherName == "Ninja" || otherName == "Pirate";
}