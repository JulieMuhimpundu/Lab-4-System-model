#include "Coffee.h"
#include <iostream>

Coffee::Coffee(const std::string& name, double price, const std::string& size)
    : MenuItem(name, price), size(size) {
}

void Coffee::display() const {
    std::cout << "Coffee: " << name << " (" << size << ") - $" << price << "\n";
}

std::string Coffee::getSize() const {
    return size;
}
