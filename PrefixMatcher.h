#ifndef PrefixMatcher_h
#define PrefixMatcher_h
#include "Trie.h"
#include <unordered_map>
#include <string>

class PrefixMatcher {
private:
    Trie trie;
    std::unordered_map<std::string, int> routerMap;

public:
    void insert(std::string address, int routerID);
    int selectRouter(std::string prefix);
};
#endif