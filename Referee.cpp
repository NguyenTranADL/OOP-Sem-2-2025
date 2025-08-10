#include "Referee.h"
#include "Move.h"

Referee::Referee() {}
Player* Referee::refGame(Player* player1, Player* player2) {
    Move* move1 = player1->makeMove();
    Move* move2 = player2->makeMove();

    if (!move1 || !move2) {
        delete move1;
        delete move2;
        return nullptr;

    if (move1->getName() == move2->getName()) {
        delete move1;
        delete move2;
        return nullptr;
    }

    if (move1->beats(move2)) {
        delete move1;
        delete move2;
        return player1;
    }

    if (move2->beats(move1)) {
        delete move1;
        delete move2;
        return player2;
    }

    delete move1;
    delete move2;
    return nullptr;
}
}
