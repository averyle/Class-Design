#include <iostream>
#include <string>
#include "store.h"
using namespace std;

int main() {
	Item Book{ "Book",12};
	Book.setStock(12);
	Item ColoredPencil{ "Colored Pencils",12};
	ColoredPencil.setStock(15);
	Item Marker{ "Markers",13 };
	Marker.setStock(50);
	Item a[3] = { Book,ColoredPencil,Marker };
	store example{ a };
	example.printItems();
} 