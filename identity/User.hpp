#pragma once
#include <string>

class User
{
public:
    User(std::string username, std::string email);
    virtual ~User() = default; // Essential for inheritance
    void login();

    std::string getUsername() const { return username; }

protected:
    std::string username;
    std::string email;
};