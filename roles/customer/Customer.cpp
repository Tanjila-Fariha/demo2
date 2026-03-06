#include "Customer.hpp"
#include <iostream>

Customer::Customer(std::string u, std::string e) : User(u, e) {}

void Customer::place_order()
{
    auto items = shopping_cart.getItems();
    if (!items.empty())
    {
        std::cout << "ORDER: " << username << " placed an order for: ";
        for (const auto &item : items)
            std::cout << item << " ";
        std::cout << std::endl;
    }
    else
    {
        std::cout << "ORDER: Cart is empty!" << std::endl;
    }
}

Cart &Customer::getCart() { return shopping_cart; }