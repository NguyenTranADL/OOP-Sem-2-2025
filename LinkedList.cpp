#include "LinkedList.h"
#include <iostream>

LinkedList::LinkedList() : head(nullptr) {}

LinkedList::LinkedList(int* array, int len) : head(nullptr) {
    for (int i = 0; i < len; ++i) {
        insertPosition(i + 1, array[i]);
    }
}

LinkedList::~LinkedList() {
    Node* curr = head;
    while (curr) {
        Node* temp = curr;
        curr = curr->getLink();
        delete temp;
    }
}

void LinkedList::insertPosition(int pos, int newNum) {
    Node* newNode = new Node(newNum);
    if (pos <= 1 || !head) {
        newNode->setLink(head);
        head = newNode;
        return;
    }
    Node* curr = head;
    int idx = 1;
    while (curr->getLink() && idx < pos - 1) {
        curr = curr->getLink();
        ++idx;
    }
    newNode->setLink(curr->getLink());
    curr->setLink(newNode);
}

bool LinkedList::deletePosition(int pos) {
    if (!head || pos < 1) return false;
    if (pos == 1) {
        Node* temp = head;
        head = head->getLink();
        delete temp;
        return true;
    }
    Node* curr = head;
    int idx = 1;
    while (curr->getLink() && idx < pos - 1) {
        curr = curr->getLink();
        ++idx;
    }
    Node* target = curr->getLink();
    if (!target) return false;
    curr->setLink(target->getLink());
    delete target;
    return true;
}

int LinkedList::get(int pos) const {
    if (pos < 1) return std::numeric_limits<int>::max();
    Node* curr = head;
    int idx = 1;
    while (curr && idx < pos) {
        curr = curr->getLink();
        ++idx;
    }
    if (!curr) return std::numeric_limits<int>::max();
    return curr->getData();
}

int LinkedList::search(int target) const {
    Node* curr = head;
    int idx = 1;
    while (curr) {
        if (curr->getData() == target) return idx;
        curr = curr->getLink();
        ++idx;
    }
    return -1;
}

void LinkedList::printList() const {
    if (!head) return;
    std::cout << "[";
    Node* curr = head;
    while (curr) {
        std::cout << curr->getData();
        if (curr->getLink()) std::cout << " ";
        curr = curr->getLink();
    }
    std::cout << "]" << std::endl;
}