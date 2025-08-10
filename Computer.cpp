#include "Computer.h"
#include <random>

Computer::Computer(const std::string& name) : name(name) {
    potentialMoves = {"Rock", "Paper", "Scissors", "Robot", "Monkey", "Pirate", "Ninja", "Zombie"};
}

Move* Computer::makeMove() {
    int randomIndex = rand() % potentialMoves.size();
    return Move::createMove(potentialMoves[randomIndex]);
}

std::string Computer::getName() const {
    return name;
}
