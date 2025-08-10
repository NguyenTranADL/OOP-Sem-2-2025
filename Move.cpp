#include "Move.h"
#include "Rock.h"
#include "Paper.h"
#include "Scissors.h"
#include "Robot.h"
#include "Monkey.h"
#include "Pirate.h"
#include "Ninja.h"
#include "Zombie.h"

Move* Move::createMove(const std::string& name) {
    if (name == "Rock") return new Rock();
    if (name == "Paper") return new Paper();
    if (name == "Scissors") return new Scissors();
    if (name == "Robot") return new Robot();
    if (name == "Monkey") return new Monkey();
    if (name == "Pirate") return new Pirate();
    if (name == "Ninja") return new Ninja();
    if (name == "Zombie") return new Zombie();
    return nullptr;
}

bool Move::isValidMove(const std::string& name) {
    return (name == "Rock" || name == "Paper" || name == "Scissors" ||
            name == "Robot" || name == "Monkey" || name == "Pirate" ||
            name == "Ninja" || name == "Zombie");
}