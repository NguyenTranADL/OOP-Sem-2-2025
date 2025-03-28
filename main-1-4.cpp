#include <iostream>
#include "Person.h"

extern PersonList createPersonList(int n);
extern PersonList shallowCopyPersonList(PersonList pl);

int main(){
    int n = 5;
    PersonList list = createPersonList(n);
    PersonList shallowList = shallowCopyPersonList(list);

    for (int i = 0; i < n; i++) {
        std::cout << "Person " << i << ": " << list.people[i].name << ", " << list.people[i].age << std::endl;
    }
    std::cout << std::endl;
    for (int i = 0; i < n; i++) {
        std::cout << "Shallow Person " << i << ": " << shallowList.people[i].name << ", " << shallowList.people[i].age << std::endl;
    }
    delete[] list.people;
    delete[] shallowList.peoplepeople;
    return 0;
}
