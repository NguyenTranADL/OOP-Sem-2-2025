#include "Human.h"
#include <iostream>
#include <string>

Human::Human(std::string playerName) : Player(playerName) {}
char Human::makeMove() {
    char move ;
    std::cout << "Enter move: ";
    std::cin >> move;
    return toupper(move);
}

std::string Human::getName() {
    return name;
}
