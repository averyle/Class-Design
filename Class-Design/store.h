#pragma once
#include <iostream>
#include <string>
#include "Item.h"

class order {
public:
    order(Item list[], int size);
    Item* orderList;
    int orderSize;
};

class store {
public:
    store(Item list[],int size);
    void processOrder(const order& param);
    Item* _list;
    int _size;
};

std::ostream& operator<<(std::ostream& os, const store& param);