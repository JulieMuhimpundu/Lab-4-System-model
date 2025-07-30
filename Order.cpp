#include "Order.h"
#include <iostream>

Order::Order() {}

Order::~Order() {
    // Delete all dynamically allocated items
    for (auto item : items) {
        delete item;
    }
}

void Order::addItem(MenuItem* item) {
    items.push_back(item);
}

double Order::getTotal() const {
    double total = 0.0;
    for (const auto item : items) {
        total += item->getPrice();
    }
    return total;
}

void Order::display() const {
    std::cout << "Order details:\n";
    for (const auto item : items) {
        item->display();
    }
    std::cout << "Total: $" << getTotal() << "\n";
}
