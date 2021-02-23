#include <iostream>
#include <string>
#include "item.h"

Item::Item(std::string name, long ID)
	: _name{ name }, _ID{ ID }{}

std::string Item::getName() {
	return _name;
}

void Item::setPrice(double param) {
	_price = param;
}

void Item::setStock(int param) {
	_stock = param;
}

int Item::getStock() {
	return _stock;
}