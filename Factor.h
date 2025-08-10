#ifndef FACTOR_H
#define FACTOR_H
#include "Move.h"

class Factor: public Move {
    public:
    static Move* createMove(const std::string& name);
    static bool isValidMove(const std::string& name);
};

#endif