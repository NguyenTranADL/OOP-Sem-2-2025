#include "Computer.h"

Computer::Computer() : Player("Computer") {}

char Computer::makeMove () {
    return 'R';
}

std::string Computer::getName () {
    return name;
}