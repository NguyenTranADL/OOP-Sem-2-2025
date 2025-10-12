#ifndef Node_h
#define Node_h
#include <string>
#include <unordered_map>

class Node {
    public:
        char value;
        std::unordered_map<std::string, Node*> children;
        bool isWord;
        Node(): isWord(false) {};
};
#endif