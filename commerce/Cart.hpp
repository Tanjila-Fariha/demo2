#pragma once
#include <vector>
#include <string>

class Cart
{
public:
    void add_item(std::string item_name);
    std::vector<std::string> getItems() const;

private:
    std::vector<std::string> items;
};