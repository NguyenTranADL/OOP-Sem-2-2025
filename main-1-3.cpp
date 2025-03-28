#include <iostream>
#include "Person.h"

extern PersonList deepCopyPersonList(PersonList pl);
extern PersonList createPersonList(int n);
int main() {
    int n = 5;
    PersonList list = createPersonList(n);
    PersonList newList = deepCopyPersonList(list);
    for (int i = 0; i < n; i++) {
        std::cout << "Person " << i << ": " << newList.people[i].name << ", " << newList.people[i].age << std::endl;
    }
    delete[] list.people;
    delete[] newList.people;
    return 0;
}