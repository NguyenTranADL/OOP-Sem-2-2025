#ifndef Autocomplete_h
#define Autocomplete_h
#include <string>
#include <vector>
#include "Trie.h"

class Autocomplete {
    private:
        Trie trie;
    public:
        void insert(std::string word);
        std::vector<std::string> getSuggestions(std::string prefix);
};
#endif