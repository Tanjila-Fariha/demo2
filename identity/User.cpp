#include "User.hpp"
#include <iostream>

User::User(std::string u, std::string e) : username(u), email(e) {}

void User::login()
{
    std::cout << "LOG: " << username << " has logged in." << std::endl;
}