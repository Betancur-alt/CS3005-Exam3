#pragma once
#include <string>

class Product {

    public:
        Product(const std::string& name, int quantity, double price);
        void restock(int amount);
        bool sell(int amount);
        void display() const;
        bool matchesName(const std::string& name) const;


    private:
        std::string m_name;
        int m_quantity;
        double m_price;
};