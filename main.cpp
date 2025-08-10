#include "Referee.h"
#include "Human.h"
#include "Computer.h"
#include <iostream>

int main() {
    Referee ref;
    Human human("Human");
    Computer computer("Computer");

    for (int i = 0; i < 4; ++i) {
        Player* winner = ref.refGame(&human, &computer);
        if (!winner) {
            std::cout << "Tie" << std::endl;
        } else {
            std::cout << winner->getName() << std::endl;
        }
    }

    return 0;
}
