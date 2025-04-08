#include <iostream>
#include "wizard.h"
#include "player.h"

Wizard::Wizard(string name, int health, int damage, int mana) : Player(name, health, damage), mana(mana) {}

void Wizard::castSpell(Player* opponent) {
    opponent->takeDamage(mana);
    std::cout << name << " casts a spell on " << opponent->getName() << " for " << damage << " damage.\n";
}