#pragma once
#include <iostream>
#include <string>
#include "Item.h"

class store {
public:
    store(Item list[],int size);
    void processOrder(const order& param) const;
    Item* _list;
    int _size;
};

class order {
public:
    order(Item list[], int size);
    Item* getOrderList() const;
    Item* orderList;
    int orderSize;
};

std::ostream& operator<<(std::ostream& os, const store& param);