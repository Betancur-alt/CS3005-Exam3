#include <iostream>
#include "Product.h"
#include "Inventory.h"

int main()
{
    Inventory inventory;
    int choice = 0;

    while (choice != 5)
    {
        std::cout << "\n===== INVENTORY MANAGER =====\n";
        std::cout << "1. Add product\n";
        std::cout << "2. View inventory\n";
        std::cout << "3. Sell product\n";
        std::cout << "4. Restock product\n";
        std::cout << "5. Exit\n";
        std::cout << "Choose an option: ";

        std::cin >> choice;


        if (choice == 1)
        {
            std::string name;
            int quantity;
            double price;

            std::cout << "Product name: ";
            std::cin >> name;

            std::cout << "Quantity: ";
            std::cin >> quantity;

            std::cout << "Price: ";
            std::cin >> price;

            if (quantity < 0 || price < 0)
            {
                std::cout << "Quantity and price cannot be negative.\n";
                continue;
            }

            Product newProduct(name, quantity, price);

            inventory.addProduct(newProduct);

            std::cout << "Product added succesfully\n";
        }

        else if (choice == 2)
        {
            inventory.displayInventory();
        }

        else if (choice == 3)
        {
            std::string name;
            int amount;

            std::cout << "Product name: ";
            std::cin >> name;

            std::cout << "Quantity to sell: ";
            std::cin >> amount;

            if (inventory.sellProduct(name, amount))
            {
                std::cout << "Product sold.\n";
            }
            else
            {
                std::cout << "Sale failed. Check product name or quantity.\n";
            }
        }

        else if (choice == 4)
        {
            std::string name;
            int amount;

            std::cout << "Product name: ";
            std::cin >> name;

            std::cout << "Quantity to restock: ";
            std::cin >> amount;

            if (inventory.restockProduct(name, amount))
            {
                std::cout << "Product restocked.\n";
            }
            else
            {
                std::cout << "Restock failed. Check product name or quantity\n";
            }
        }

        else if (choice == 5)
        {
            std::cout << "Goodbye!\n";
        }
        else
        {
            std::cout << "Invalid option.\n";
        }
    }

    return 0;
}