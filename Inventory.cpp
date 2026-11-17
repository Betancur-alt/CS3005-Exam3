#include "Inventory.h"
#include <iostream>

void Inventory::addProduct(const Product& product)
{
    m_products.push_back(product);
}

void Inventory::displayInventory() const
{
    std::cout << "\n===== CURRENT INVENTORY =====\n";
    for (const Product& product : m_products)
    {
        product.display();
        std::cout << "------------------------\n";
    }
}

bool Inventory::sellProduct(const std::string& name, int amount)
{
    for (Product& product: m_products) 
    {
        if(product.matchesName(name))
        {
            return product.sell(amount);
        }
    }

    return false;
}

bool Inventory::restockProduct(const std::string& name, int amount)
{
    if (amount > 0)
    {

        for (Product& product: m_products) 
        {
            if(product.matchesName(name))
            {
                product.restock(amount);
                return true;
            }
        }
    }

    return false;
}