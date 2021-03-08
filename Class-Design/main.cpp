#include <iostream>
#include <string>
#include "store.h"

int main() {
	Item Books{ "Books", 12345, 5, 20 };
	Item ColoredPencils{ "Colored Pencils", 54321, 3, 10 };
	vector<Item> items;
	items.push_back(Books);
	items.push_back(ColoredPencils);
	store nStore(items);
	Item BooksOrder{ "Books", 12345, 4, 20 };
	Item ColoredPencilsOrder{ "Colored Pencils", 54321, 2, 10 };
	order newOrder;
	newOrder.add(BooksOrder);
	newOrder.add(ColoredPencilsOrder);
	nStore.processOrder(newOrder);
	std::cout << nStore;
} 