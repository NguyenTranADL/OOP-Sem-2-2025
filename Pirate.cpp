#include "Pirate.h"
#include "Robot.h"
#include "Monkey.h"

bool Pirate::beats(const Move& other) const {
    const std::string otherName = other.getName();
    return otherName == "Robot" || otherName == "Monkey";
}