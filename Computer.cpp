#include "Computer.h"
#include "Move.h"
#include "Rock.h"
#include <string>

Computer::Computer() : name("Computer") {}
Computer::Computer(const std::string& name) : name(name) {}
std::string Computer::getName() const {
    return name;
}

Move* Computer::makeMove() {
    return new Rock();
}
