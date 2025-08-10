#include "Computer.h"
#include "Move.h"
#include "Rock.h"

Computer::Computer() { name = "Computer";}
std::string Computer::getName() const { return name;}
Move* Computer::makeMove() { return new Rock(); }