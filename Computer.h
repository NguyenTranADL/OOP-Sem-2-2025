#ifndef COMPUTER_H
#define COMPUTER_H
#include "Player.h"
#include <vector>

class Computer: public Player {
    private:
        std::string name;
        std::vector <std::string> potentialMoves;
    public:
        Computer(const std::string& name);
        Move* makeMove() override;
        std::string getName() const override;
};
#endif