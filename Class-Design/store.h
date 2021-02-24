#pragma once
#include <iostream>
#include <string>
#include "item.h"

class store {
public:
    store(Item list[],int size);
    void printItems();
    Item* _list;
    int _size;
};