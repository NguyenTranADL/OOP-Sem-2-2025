#include <iostream> 
#include "Human.h"  
#include "Computer.h" 
#include "Referee.h" 

int main () {
    Human player1("Kevin");
    Computer computer;
    Referee referee;

    Player* winner = referee.refGame(&player1, &computer);
    if (winner == nullptr) {
        std::cout << "Its a tie." << std::endl;
    } else {
        std::cout << winner->getName() << " wins!" << std::endl;
    }
    return 0;
}