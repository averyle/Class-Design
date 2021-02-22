#include <iostream>
#include <string>
#include "item.h"

Item::Item(std::string name, long ID, int stock, double price)
	: _name{ name }, _ID{ ID }, _stock{ stock }, _price{ price } {}

std::string Item::getName() {
	return _name;
}

int Item::getStock() {
	return _stock;
}