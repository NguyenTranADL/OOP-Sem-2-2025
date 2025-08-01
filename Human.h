#ifndef HUMAN_H
#define HUMAN_H
#include "Player.h"
#include <iostream>

class Human : public Player {
    public :
        Human(std::string playerName = "Human");
        char makeMove() override;
        std::string getName() override;
};
#endif