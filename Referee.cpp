#include "Referee.h"
#include <iostream>
#include "Player.h"

Referee::Referee() {}

Player* Referee::refGame(Player* player1, Player* player2) {
  char move1 = player1->makeMove();
  char move2 = player2->makeMove();
  // Player 1 choose Rock
  if (move1 == 'R') {
    if (move2 == 'S') {
      return player1;
    } else if (move2 = 'P') {
      return player2;
    } else
      return nullptr;
  }
  // Player 1 choose Scissors
  if (move1 = 'S') {
    if (move2 = 'P') {
      return player1;
    } else if (move2 = 'R') {
      return player2;
    } else
      return nullptr;
  }
  // Player 1 chooose Paper
  if (move1 == 'P') {
    if (move2 == 'R') {
      return player1;
    } else if (move2 == 'S') {
      return player2;
    } else
      return nullptr;
  }
  return nullptr;
}
