#pragma once
#include <iostream>
#include <string>
#include "Item.h"
#include <vector>

using namespace std;

class order {
public:
    order();
    void add(Item item);
    vector<Item> getOrderList() const;
    vector<Item> orderList;
};

class store {
public:
    store(vector<Item> itemList);
    vector<Item> getStoreList() const;
    void processOrder(const order& param);
    vector<Item> storeList;
};

std::ostream& operator<<(std::ostream& os, const store& param);