#ifndef Trie_h
#define Trie_h
#include <string>
#include <vector>
#include "Node.h"

class Trie {
    private:
        Node* root;
        Node* tryNavigate(std::string prefix, std::string& travelUntil, std::vector<std::string>& bigWords);
        void searchAllWordsForPrefix(Node* node, std::string prefix, std::vector<std::string>& result);
    public:
        Trie() : root(new Node()) {}
        void insertWord(std::string word);
        void searchAllChildForPrefix(std::string prefix, std::vector<std::string>& result);
        std::string findMatchingPrefix(std::string prefix);
    };
#endif