#pragma once
#include "../../identity/User.hpp"

class Admin : public User
{
public:
    Admin(std::string username, std::string email, int access_level);
    void delete_user(const User &user);

private:
    int access_level;
};