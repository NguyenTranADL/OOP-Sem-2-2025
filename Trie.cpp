#include "Trie.h"

void Trie::insertWord(std::string word) {
    Node* current = root;
    for (char& c : word) {
        std::string nodeVal(1, c);
        if (current->children.find(nodeVal) == current->children.end()) {
            current->children.insert({nodeVal, new Node()});
        }
        current = current->children.find(nodeVal) ->second;
    }
    current->isWord = true;
}

void Trie::searchAllWordsForPrefix(Node* node, std::string prefix, std::vector<std::string>& result) {
    if (node->isWord) {
        result.push_back(prefix);
    }
    for(std::unordered_map<std::string, Node*>::iterator it = node->children.begin(); it != node->children.end(); ++it) {
        this->searchAllWordsForPrefix(it->second, prefix + it->first, result);
    }
}

Node* Trie::tryNavigate(std::string prefix, std::string& travelUntil, std::vector<std::string>& bigWords) {
    Node* current = this->root;
    for(char& c : prefix) {
        std::string nodeVal(1, c);
        if (current->children.find(nodeVal) == current->children.end())
            break;
        else {
        travelUntil += nodeVal;
        current = current->children.find(nodeVal) ->second;
        if (current->isWord)
            bigWords.push_back(travelUntil);
        }
    }
    return current;
}

void Trie::searchAllChildForPrefix(std::string prefix, std::vector<std::string>& result) {
    std::string travelUntil;
    std::vector<std::string> bigWords;
    Node* current = this->tryNavigate(prefix, travelUntil, bigWords);
    if (travelUntil == prefix)
        this->searchAllWordsForPrefix(current, travelUntil, result);
}

std::string Trie::findMatchingPrefix(std::string prefix) {
    std::string travelUntil;
    std::vector<std::string> bigWords;
    this->tryNavigate(prefix, travelUntil, bigWords);
    return bigWords.back();
}
    