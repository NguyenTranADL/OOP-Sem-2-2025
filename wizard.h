#ifndef WIZARD_H
#define WIZARD_H
#include <iostream>
#include <string>
#include "player.h"

class Wizard : public Player {
    public:
        int mana;
        Wizard(string name, int health, int damage, int mana);
        void castSpell(Player* opponent);
    };
#endif
