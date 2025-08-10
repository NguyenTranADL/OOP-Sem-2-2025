#include "Paper.h"
#include "Rock.h"

bool Paper::beats(const Move& other) const {
    const std::string otherName = other.getName();
    return otherName == "Rock";
}