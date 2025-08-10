#include "Human.h"
#include <string>
#include <iostream>

Human::Human(const std::string& name) : name(name) {}

Move* Human::makeMove() {
    std::string moveName;
    while (true) {
        std::cout << "Enter Move: ";
        std::cin >> moveName;
        Move* move = Move::createMove(moveName);
        if (move != nullptr) {
            return move;
        }
        std::cout << "Invalid move, please try again." << std::endl;
    }
}

std::string Human::getName() const {
    return name;
}