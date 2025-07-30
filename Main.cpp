

/*Orders for Alice Johnson:
Order details:
Coffee: Latte (large) - $3.5
Pastry: Croissant - $2.5
Total: $6
-----------------
Barista Bob the Barista is making coffee!
Orders for Charlie Smith:
Order details:
Coffee: Espresso (small) - $2
Pastry: Gluten-Free Muffin (Gluten Free) - $3
Total: $5
-----------------
*/
#include <iostream>
#include "Coffee.h"
#include "Pastry.h"
#include "Order.h"
#include "Customer.h"
#include "Barista.h"

int main() {
    // Create a few menu items
    Coffee* c1 = new Coffee("Latte", 3.5, "large");
    Coffee* c2 = new Coffee("Espresso", 2.0, "small");
    Pastry* p1 = new Pastry("Croissant", 2.5, false);
    Pastry* p2 = new Pastry("Gluten-Free Muffin", 3.0, true);

    // Create an order and add items
    Order order1;
    order1.addItem(c1);
    order1.addItem(p1);

    // Create a customer and assign the order
    Customer cust("Alice Johnson", "alice@example.com");
    cust.addOrder(order1);

    // Display customer's orders
    cust.showOrders();

    // Create a barista
    Barista bar("Bob the Barista", "bob@coffee.com", 101);
    bar.makeCoffee();

    // Create another order and customer
    Order order2;
    order2.addItem(c2);
    order2.addItem(p2);

    Customer cust2("Charlie Smith", "charlie@example.com");
    cust2.addOrder(order2);

    cust2.showOrders();

    return 0;
}
