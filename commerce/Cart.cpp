#include "Cart.hpp"
#include <iostream>

void Cart::add_item(std::string item_name)
{
    items.push_back(item_name);
    std::cout << "CART: Added " << item_name << " to the cart." << std::endl;
}

std::vector<std::string> Cart::getItems() const
{
    return items;
}