#include "Product.h"
#include <iostream>

Product::Product(const std::string& name, int quantity, double price)
    : m_name(name), m_quantity(quantity), m_price(price)
{
}

void Product::restock(int amount)
{
    if (amount > 0) 
    {
        m_quantity += amount;
    }
}

bool Product::sell(int amount)
{
    if (amount > 0 && amount <= m_quantity) 
    {
        m_quantity -= amount;
        return true;
    }

    return false;
}

void Product::display() const
{
    std::cout << "Product name: " << m_name << std::endl;
    std::cout << "Quantity: " << m_quantity << std::endl;
    std::cout << "Price: " << m_price << std::endl;
}

bool Product::matchesName(const std::string& name) const
{
    return m_name == name;
}