#pragma once
#ifndef MENUITEM_H
#define MENUITEM_H

#include <string>

class MenuItem {
protected:
    std::string name;
    double price;

public:
    MenuItem(const std::string& name = "", double price = 0.0);
    virtual ~MenuItem() = default;

    std::string getName() const;
    double getPrice() const;

    virtual void display() const = 0;  // pure virtual for polymorphism
};

#endif
