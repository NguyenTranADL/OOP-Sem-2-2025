#include "Computer.h"
#include "Move.h"
#include "Rock.h"

Computer::Computer(const std::string& name) : Player() {
    this->name = name;
}

std::string Computer::getName() const {
    return name;
}

Move* Computer::makeMove() {
    return new Rock();
}
