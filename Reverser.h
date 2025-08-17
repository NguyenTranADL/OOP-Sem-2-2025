#ifndef REVERSER_H
#define REVERSER_H
#include <string>

class Reverser {
    private:
        int reverseDigitHelper(int value, int reversedNumber);
    public:
        int reverseDigit(int value);
        std::string reverseString(std::string characters);

};

#endif
