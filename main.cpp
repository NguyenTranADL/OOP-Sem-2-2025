#include <iostream>
#include <string>
#include "Referee.h"
#include "Human.h"
#include "Computer.h"

int main() {
    Referee referee;
    Human* humanPlayer = new Human("Player 1");
    Computer* computerPlayer = new Computer("Computer");
    Player* winner = referee.refGame(humanPlayer, computerPlayer);
    
    if (winner != nullptr) {
        std::cout << "The winner is: " << winner->getName() << std::endl;
    } else {
        std::cout << "It's a draw." << std::endl;
    }
    delete humanPlayer;
    delete computerPlayer;
    return 0;
}