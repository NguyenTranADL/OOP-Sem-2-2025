#include "Paper.h"
#include <string>

std::string Paper::getName() const { return "Paper";}

bool Paper::beats(const Move* other) const {
    std::string otherName = other->getName();
    return otherName == "Rock" || otherName == "Robot" || otherName == "Ninja";
}