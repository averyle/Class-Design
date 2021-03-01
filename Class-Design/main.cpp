#include <iostream>
#include <string>
#include "store.h"
using namespace std;

int main() {
	Item Books{ "Books",5 };
	Item ColoredPencils{ "Colored Pencils", 3 };
	Item a[2] = { Books, ColoredPencils };
	store Store{ a,2 };
	Item booksOrder{ "Books",2 };
	Item coloredPencilsOrder{ "Colored Pencils", 1 };
	Item b[2] = { booksOrder, coloredPencilsOrder };
	order newOrder{ b,2 };
	Store.processOrder(newOrder);
	std::cout << Store;
} 