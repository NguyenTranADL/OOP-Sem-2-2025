#include "DocumentManager.h"

void DocumentManager::addDocument(std::string name, int id, int max_users) {
    docs[id] = Document(name, id, max_users);
    name_map[name] = id;
}

void DocumentManager::addPatron(int patronID) {
    users.insert(patronID);
}

int DocumentManager::search(std::string name) {
    auto it = name_map.find(name);
    return (it != name_map.end()) ? it->second : 0;
}

bool DocumentManager::borrowDocument(int docid, int patronID) {
    if (users.find(patronID) == users.end()) {
        return false;
    }
    auto it = docs.find(docid);
    if (it == docs.end()) {
        return false;
    }
    
    Document& d = it->second;
    
    if (active_borrows[docid].find(patronID) != active_borrows[docid].end()) {
        return false;
    }
    if (d.active_users >= d.max_users) {
        return false;
    }
    active_borrows[docid].insert(patronID);
    d.active_users++;
    return true;
}

void DocumentManager::returnDocument(int docid, int patronID) {
    auto it1 = docs.find(docid);
    if (it1 == docs.end()) {
        return;
    }
    
    auto it2 = active_borrows.find(docid);
    if (it2 == active_borrows.end()) {
        return;
    }
    if (it2->second.erase(patronID) > 0) {
        it1->second.active_users--;
    }
}