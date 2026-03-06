#include "roles/customer/Customer.hpp"
#include "roles/admin/Admin.hpp"
#include <iostream>

int main()
{
    std::cout << "--- Starting Corporate System Test ---" << std::endl;

    // 1. Create a Customer and use the Cart
    Customer buyer("Alice_Dev", "alice@corp.com");
    buyer.login();
    buyer.getCart().add_item("ThinkPad Laptop");
    buyer.place_order();

    std::cout << "------------------------------" << std::endl;

    // 2. Create an Admin to manage the Customer
    Admin boss("SuperUser", "admin@corp.com", 10);
    boss.login();
    boss.delete_user(buyer);

    std::cout << "--- Test Complete ---" << std::endl;
    return 0;
}