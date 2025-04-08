#include <iostream>
#include "warrior.h"
#include "player.h"

Warrior::Warrior(string name, int health, int damage, string weapon) : Player(name, health, damage), weapon(weapon) {}

void Warrior::swingWeapon(Player* opponent) {
    opponent->takeDamage(damage);
    std::cout << name << " swings their " << weapon << " at " << opponent->getName() << "!\n";}