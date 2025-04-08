#ifndef PLAYER_H
#define PLAYER_H
#include <iostream>
#include <string>
using namespace std;

class Player {
    public:
        string name;
        int health;
        int damage;

        Player(string name, int health, int damage);
        string getName();
        int getHealth();
        void attack(Player* opponent, int damage);
        void takeDamage(int damage);
};
#endif