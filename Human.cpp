#include "Human.h"
#include "Move.h"
#include "Rock.h"
#include "Paper.h"
#include "Scissors.h"
#include "Monkey.h"
#include "Robot.h"
#include "Pirate.h"
#include "Ninja.h"
#include "Zombie.h"
#include <iostream>
#include <string>

Human::Human() {name="Human";}
Human::Human(const std::string& name) : name(name) {}

std::string Human::getName() const {
    return name;
}

Move* Human::makeMove() {
    std::string input;
    std::cin >> input;

    if (input == "Rock") return new Rock();
    if (input == "Paper") return new Paper();
    if (input == "Scissors") return new Scissors();
    if (input == "Monkey") return new Monkey();
    if (input == "Robot") return new Robot();
    if (input == "Pirate") return new Pirate();
    if (input == "Ninja") return new Ninja();
    if (input == "Zombie") return new Zombie();

    return nullptr; 
}