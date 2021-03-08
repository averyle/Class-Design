#include <iostream>
#include <string>
#include "item.h"

Item::Item(std::string name, long ID, int stock, double price)
: _name{ name }, _ID{ ID }, _stock{ stock }, _price{ price }{}

std::string Item::getName() const {
	return _name;
}

void Item::setPrice(double param) {
	_price = param;
}

void Item::setStock(int param) {
	_stock = param;
}

int Item::getStock() const {
	return _stock;
}

long Item::getID() const {
	return _ID;
}

double Item::getPrice() const {
	return _price;
}

std::ostream& operator<<(std::ostream& os, const Item& param) {
	os << "Name: " << param.getName() << "\nID: " << param.getID() << "\nPrice: " << param.getPrice() << "\nQuantity in stock:" << param.getStock() << "\n";
	return os;
}