#pragma once
#include <iostream>
#include <string>

class Item {
public:
	Item(std::string name, long ID, int stock, double price);
	std::string getName() const;
	int getStock() const;
	long getID() const;
	double getPrice() const;
	void setStock(int stock);
	void setPrice(double price);
	std::string _name;
	long _ID;
	int _stock;
	double _price;
};

std::ostream& operator<<(std::ostream& os, const Item& param);