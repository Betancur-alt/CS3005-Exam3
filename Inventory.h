#pragma once

#include <vector>
#include "Product.h"

class Inventory {
    public:
        void addProduct(const Product& product);
        void displayInventory() const;
        bool sellProduct(const std::string& name, int amount);
        bool restockProduct(const std::string& name, int amount);

    private:
        std::vector<Product> m_products;

};