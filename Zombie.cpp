#include "Zombie.h"
#include "Pirate.h"
#include "Monkey.h"

bool Zombie::beats(const Move& other) const {
    const std::string otherName = other.getName();
    return otherName == "Pirate" || otherName == "Monkey";
}