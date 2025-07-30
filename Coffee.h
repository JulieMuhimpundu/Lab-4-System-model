#pragma once
#ifndef COFFEE_H
#define COFFEE_H

#include "MenuItem.h"

class Coffee : public MenuItem {
    std::string size;  // e.g., small, medium, large

public:
    Coffee(const std::string& name = "", double price = 0.0, const std::string& size = "medium");
    void display() const override;
    std::string getSize() const;
};

#endif
