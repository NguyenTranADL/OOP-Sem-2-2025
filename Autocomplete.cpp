#include "Autocomplete.h"

void Autocomplete::insert(std::string word) {
    this->trie.insertWord(word);
}
std::vector<std::string> Autocomplete::getSuggestions(std::string prefix) {
    std::vector<std::string> results;
    this->trie.searchAllChildForPrefix(prefix, results);
    return results;
}