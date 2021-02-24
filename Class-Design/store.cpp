#include "store.h"
#include <iostream>
#include <string>

store::store(Item list[], int size)
    : _list{ list }, _size{ size }{}

void store::printItems() {
    std::cout << "Store:\n";
    for (int i = 0; i < _size; i++) {
        Item item = _list[i];
        std::cout << item.getName() << " x " << item.getStock() << "\n";
    }
}