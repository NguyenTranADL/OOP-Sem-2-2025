#include "player.h"

#include <iostream>

Player::Player(string name, int phealth, int damage)
    : name(name), health(phealth), damage(damage) {}
void Player::attack(Player* opponent, int damage) {
  opponent->takeDamage(damage);
  cout << name << " attacks " << opponent->name << " for " << damage << endl;
}
void Player::takeDamage(int damage) {
  health -= damage;
  cout << name << " takes " << damage << " damage. Health is now " << health
       << endl;
}
string Player::getName() { return name; }
int Player::getHealth() { return health; }