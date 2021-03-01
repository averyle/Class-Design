#include "store.h"
#include <iostream>
#include <string>

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

void store::processOrder(const order& param) const {
    Item* newOrder = param.getOrderList();
    for (int i = 0; i < param.orderSize; i++) {
        Item item = newOrder[i];
        for (int j = 0; j < _size; j ++) {
            Item oItem = _list[i];
            if (item._name == oItem._name) {
                int nStock = oItem._stock - item._stock;
                item.setStock(nStock);
            }
        }
    }
}

order::order(Item list[], int size)
    : orderList{ list }, orderSize{ size } {}

Item* order::getOrderList() const {
    return orderList;
}