#pragma once
#include <iostream>
#include <string>

class Item {
public:
	Item(std::string name,long ID);
	std::string getName();
	int getStock();
	void setStock(int stock);
	void setPrice(double price);
	std::string _name;
	long _ID = 0;
	int _stock = 1;
	double _price = 0;
};