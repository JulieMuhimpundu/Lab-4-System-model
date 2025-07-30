#include "Barista.h"
#include <iostream>

Barista::Barista(const std::string& name, const std::string& email, int employeeID)
    : Customer(name, email), employeeID(employeeID) {
}

int Barista::getEmployeeID() const {
    return employeeID;
}

void Barista::makeCoffee() const {
    std::cout << "Barista " << name << " is making coffee!\n";
}
