#include "store.h"
#include <iostream>
#include <string>
#include <vector>

store::store(Item list[], int size)
    : _list{ list }, _size{ size }{}

std::ostream& operator<<(std::ostream& os, const store& param) {
    os << "Store:\n";
    for (int i = 0; i < param._size; i++) {
        Item item = param._list[i];
        os << item.getName() << " x " << item.getStock() << "\n";
    }
    return os;
}

void store::processOrder(const order& param) {
    Item *newOrder = param.orderList;
    for (int i = 0; i < param.orderSize; i++) {
        Item item = newOrder[i];
        std::cout << item;
        for (int j = 0; j < _size; j ++) {
            Item oItem = _list[j];
            if (oItem._name == item._name) {
                int nStock = oItem._stock - item._stock;
                oItem.setStock(nStock);
            }
        }
    }
}

order::order(Item list[], int size)
    : orderList{ list }, orderSize{ size } {}