#include <iostream>
#include "person.h"

PersonList shallowCopyPersonList(PersonList pl) {
    PersonList newList;
    newList.numPeople = pl.numPeople;
    newList.people = pl.people;
    return newList;
}
