#include "Pastry.h"
#include <iostream>

Pastry::Pastry(const std::string& name, double price, bool glutenFree)
    : MenuItem(name, price), glutenFree(glutenFree) {
}

void Pastry::display() const {
    std::cout << "Pastry: " << name << (glutenFree ? " (Gluten Free)" : "") << " - $" << price << "\n";
}

bool Pastry::isGlutenFree() const {
    return glutenFree;
}
