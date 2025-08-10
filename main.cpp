#include <iostream>
#include <string>
#include "Human.h"
#include "Computer.h"
#include "Referee.h"

int main() {
    Human *h = new Human("Alice");
    Human *h2 = new Human("Bob");
    Computer *c = new Computer("Computer");

    Referee referee;

    Player *winner1 = referee.refGame(h, h2);
    if (winner1) {
        std::cout << "The winner is: " << winner1->getName() << "!" << std::endl;
    } else {
        std::cout << "It's a draw." << std::endl;
    }

    Player *winner2 = referee.refGame(h, c);
    if (winner2) {
        std::cout << "The winner is: " << winner2->getName() << "!" << std::endl;
    } else {
        std::cout << "It's a draw." << std::endl;
    }

    delete h;
    delete h2;
    delete c;

    return 0;
}