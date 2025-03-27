#include "person.h"
#include <iostream>
using namespace std;

Person* createPersonArray(int n) {
    Person* people = new Person[n];
    for (int i = 0; i < n; i++) {
        people[i].name = "John Doe";
        people[i].age = 0;
    }
    return people;
}