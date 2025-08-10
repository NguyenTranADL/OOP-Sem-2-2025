#include "Scissors.h"
#include <string>

std::string Scissors::getName() const { return "Scissors";}

bool Scissors::beats(const Move* other) const {
    std::string otherName = other->getName();
    return otherName == "Paper" || otherName == "Monkey" || otherName == "Zombie";
}