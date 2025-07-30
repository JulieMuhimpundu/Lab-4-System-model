#pragma once
#ifndef PASTRY_H
#define PASTRY_H

#include "MenuItem.h"

class Pastry : public MenuItem {
    bool glutenFree;

public:
    Pastry(const std::string& name = "", double price = 0.0, bool glutenFree = false);
    void display() const override;
    bool isGlutenFree() const;
};

#endif
