#ifndef PLAYER_H
#define PLAYER_H
#include <string>

class Player {
protected:
    std::string name;
public:
    Player(std::string playerName);
    virtual char makeMove() = 0; // Pure virtual function
    virtual ~Player() = default; // Virtual destructor for proper cleanup
    virtual std::string getName() = 0; // Pure virtual function to get player's name
};
#endif