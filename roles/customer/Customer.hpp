#pragma once
#include "../../identity/User.hpp"
#include "../../commerce/Cart.hpp"

class Customer : public User
{
public:
    Customer(std::string username, std::string email);
    void place_order();
    Cart &getCart();

private:
    Cart shopping_cart; // Composition (HAS-A)
};