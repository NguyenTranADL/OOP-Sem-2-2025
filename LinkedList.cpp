#include "LinkedList.h"
#include <iostream>

LinkedList::LinkedList() : head(nullptr) {}

LinkedList::LinkedList(int* array, int len) : head(nullptr) {
    for (int i = 0; i < len; ++i) {
        insertPosition(i + 1, array[i]);
    }
}

LinkedList::~LinkedList() {
    Node* current = head;
    while (current) {
        Node* toDelete = current;
        current = current->getLink();
        delete toDelete;
    }
}

void LinkedList::insertPosition(int pos, int newNum) {
    Node* newNode = new Node(newNum);
    if (pos <= 1 || !head) {
        newNode->setLink(head);
        head = newNode;
        return;
    }
    Node* current = head;
    int index = 1;
    while (current->getLink() && index < pos - 1) {
        current = current->getLink();
        ++index;
    }
    newNode->setLink(current->getLink());
    current->setLink(newNode);
}


bool LinkedList::deletePosition(int pos) {
    if (!head || pos < 1) return false;
    if (pos == 1) {
        Node* toDelete = head;
        head = head->getLink();
        delete toDelete;
        return true;
    }
    Node* current = head;
    int index = 1;
    while (current->getLink() && index < pos - 1) {
        current = current->getLink();
        ++index;
    }
    Node* target = current->getLink();
    if (!target) return false;
    current->setLink(target->getLink());
    delete target;
    return true;
}

int LinkedList::get(int pos) const {
    if (pos < 1) return std::numeric_limits<int>::max();
    Node* current = head;
    int index = 1;
    while (current && index < pos) {
        current = current->getLink();
        ++index;
    }
    if (!current) return std::numeric_limits<int>::max();
    return current->getData();
}


int LinkedList::search(int target) const {
    Node* current = head;
    int index = 1;
    while (current) {
        if (current->getData() == target) return index;
        current = current->getLink();
        ++index;
    }
    return -1;
}

void LinkedList::printList() const {
    if (!head) return;
    std::cout << "[";
    Node* current = head;
    while (current) {
        std::cout << current->getData();
        if (current->getLink()) std::cout << " ";
        current = current->getLink();
    }
    std::cout << "]" << std::endl;
}