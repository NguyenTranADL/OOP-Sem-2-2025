#include "Referee.h"
#include "Human.h"
#include "Computer.h"
#include <iostream>

int main() {
    Referee ref;
    Human human("Player1");
    Computer computer("Computer");

     if (Player* winner = ref.refGame(&human, &computer)) {
        std::cout << "Winner is: " << winner->getName() << std::endl;
    } else {
        std::cout << "It's a draw." << std::endl;
    }

    return 0;
}