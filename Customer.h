#pragma once
#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <string>
#include <vector>
#include "Order.h"

class Customer {
protected:
    std::string name;
    std::string email;
    std::vector<Order> orders;  // aggregation: Customer has Orders

public:
    Customer(const std::string& name = "", const std::string& email = "");
    virtual ~Customer() = default;

    std::string getName() const;
    std::string getEmail() const;

    void addOrder(const Order& order);
    void showOrders() const;
};

#endif
