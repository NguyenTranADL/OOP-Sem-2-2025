#include "Computer.h"
#include "Move.h"
#include "Rock.h"

Move* Computer::makeMove() { return new Rock(); }