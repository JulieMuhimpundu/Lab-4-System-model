#include "MenuItem.h"

MenuItem::MenuItem(const std::string& name, double price)
    : name(name), price(price) {
}

std::string MenuItem::getName() const {
    return name;
}

double MenuItem::getPrice() const {
    return price;
}
