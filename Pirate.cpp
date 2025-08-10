#include "Pirate.h"
#include <string>

std::string Pirate::getName() const {return "Pirate";}

bool Pirate::beats(const Move* other) const {
    std::string otherName = other->getName();
    return otherName == "Robot" || otherName == "Monkey";
}