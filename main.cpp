#include <iostream>
#include <string>
#include "Referee.h"
#include "Human.h"
#include "Computer.h"

int main() {
    Referee ref;
    Human *humanPlayer = new Human("Player One");
    Computer *computerPlayer = new Computer("Comp");
    Player* winner = ref.refGame(humanPlayer, computerPlayer);

    if (winner != nullptr) {
        std::cout << "The winner is: " << winner->getName() << std::endl;
    } else {
        std::cout << "It's a draw." << std::endl;
    }
    delete humanPlayer;
    delete computerPlayer;
    return 0;
}