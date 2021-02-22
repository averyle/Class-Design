#pragma once
#include <iostream>
#include <string>
#include "item.h"

class store {
public:
    store(Item list[]);
    void printItems();

private:
    Item* _list[];
};