#include "PrefixMatcher.h"

void PrefixMatcher::insert(std::string address, int routerID) {
    this->trie.insertWord(address);
    this->routerMap.insert({address, routerID});
}

int PrefixMatcher::selectRouter(std::string prefix) {
    std::string result = this->trie.findMatchingPrefix(prefix);
    return this->routerMap.at(result);
}