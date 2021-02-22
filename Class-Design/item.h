#pragma once
#include <iostream>
#include <string>

class Item {
public:
	Item(std::string name,long ID, int stock, double price);
	std::string getName();
	int getStock();

	std::string _name;
	long _ID;
	int _stock;
	double _price;
};