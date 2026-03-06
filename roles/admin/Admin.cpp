#include "Admin.hpp"
#include <iostream>

Admin::Admin(std::string u, std::string e, int al) : User(u, e), access_level(al) {}

void Admin::delete_user(const User &user)
{
    std::cout << "ADMIN: User " << user.getUsername() << " has been removed (Access Level: " << access_level << ")" << std::endl;
}