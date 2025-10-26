#ifndef DOCUMENTMANAGER_H
#define DOCUMENTMANAGER_H

#include <string>
#include <unordered_map>
#include <unordered_set>

class DocumentManager {
private:
    struct Document {
        std::string name;
        int id;
        int max_users;              
        int active_users;           
        
        Document() : id(0), max_users(0), active_users(0) {}
        Document(std::string n, int i, int limit) 
            : name(n), id(i), max_users(limit), active_users(0) {}
    };
    std::unordered_map<int, Document> docs;
    std::unordered_map<std::string, int> name_map;
    std::unordered_set<int> users;
    std::unordered_map<int, std::unordered_set<int>> active_borrows;

public:
    void addDocument(std::string name, int id, int max_users);
    void addPatron(int patronID);
    int search(std::string name);
    bool borrowDocument(int docid, int patronID);
    void returnDocument(int docid, int patronID);
};
#endif