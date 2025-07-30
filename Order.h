#ifndef ORDER_H
#define ORDER_H

#include <vector>
#include "MenuItem.h"

class Order {
    std::vector<MenuItem*> items;  // Polymorphic aggregation: Order has MenuItem*

public:
    Order();
    ~Order();

    void addItem(MenuItem* item);
    double getTotal() const;
    void display() const;
};

#endif
#pragma once
