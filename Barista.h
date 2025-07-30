#pragma once
#ifndef BARISTA_H
#define BARISTA_H

#include "Customer.h"
#include <string>

class Barista : public Customer {
    int employeeID;

public:
    Barista(const std::string& name = "", const std::string& email = "", int employeeID = 0);

    int getEmployeeID() const;
    void makeCoffee() const;
};

#endif
