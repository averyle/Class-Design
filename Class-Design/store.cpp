#include "store.h"
#include <iostream>
#include <string>

store::store(Item list[])
    : _list{ list } {}

void store::printItems() {
    std::cout << "Store:\n";
    for (int i = 0; i < 100; i++) {
        Item item = _list[i];
        std::cout << item.getName() << " x " << item.getStock() << "\n";
    }
}