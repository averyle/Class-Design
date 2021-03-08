#include "store.h"
#include <iostream>
#include <string>
#include <vector>

store::store(vector<Item> itemList)
    : storeList{ itemList } {}

vector<Item> store::getStoreList() const {
    return storeList;
}

std::ostream& operator<<(std::ostream& os, const store& param) {
    os << "Store:\n";
    for (Item i : param.getStoreList()) {
        os << i.getName() << " x " << i.getStock() << "\n";
    }
    return os;
}

order::order() {}

void order::add(Item item) {
    orderList.push_back(item);
}

vector<Item> order::getOrderList() const {
    return orderList;
}

void store::processOrder(const order& param) {
    for (auto i : param.getOrderList()) {
        for (int j = 0; j < storeList.size() ; j ++) {
            if ((i.getName() == storeList[j].getName()) && (i.getID() == storeList[j].getID())) {
                i.setStock(storeList[j].getStock()- i.getStock());
                storeList[j] = i;
                break;
            }
        }
    }
}