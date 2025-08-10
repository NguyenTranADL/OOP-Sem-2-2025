#include "Monkey.h"
#include "Ninja.h"
#include "Robot.h"

bool Monkey::beats(const Move& other) const {
    const std::string otherName = other.getName();
    return otherName == "Ninja" || otherName == "Robot";
}