#include "store.h"
#include <iostream>
#include <string>

store::store(Item list[])
    : _list{ list } {}

void store::printItems() {
    std::cout << "Store:\n";
    int i = 0;
    while (i < 100) {
        Item* item = _list[i];
        std::cout << item->getName() << " x " << item->getStock() << "\n";
        i++;
    }
}