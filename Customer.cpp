#include "Customer.h"
#include <iostream>

Customer::Customer(const std::string& name, const std::string& email)
    : name(name), email(email) {
}

std::string Customer::getName() const {
    return name;
}

std::string Customer::getEmail() const {
    return email;
}

void Customer::addOrder(const Order& order) {
    orders.push_back(order);
}

void Customer::showOrders() const {
    std::cout << "Orders for " << name << ":\n";
    for (const auto& order : orders) {
        order.display();
        std::cout << "-----------------\n";
    }
}
