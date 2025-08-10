#include "Ninja.h"
#include "Pirate.h"
#include "Zombie.h"

bool Ninja::beats(const Move& other) const {
    const std::string otherName = other.getName();
    return otherName == "Pirate" || otherName == "Zombie";
}