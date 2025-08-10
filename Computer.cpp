#include "Computer.h"
#include "Move.h"
#include "Rock.h"

Computer::Computer() { name = "Computer";}
Move* Computer::makeMove() { return new Rock(); }