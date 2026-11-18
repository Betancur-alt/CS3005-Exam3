# CS3005 Exam 3 - Inventory Manager

## Description

This is a simple inventory management program written in C++. It allows users to add products, view their inventory, sell products, and restock existing products through a terminal menu.

## Features

- Add products with a name, quantity, and price.
- View all products in the inventory.
- Sell products and update their quantities.
- Restock existing products.
- Prevent selling more products than are available.

## How to Compile and Run

Compile the program:

```bash
make
```

Run the program:

```bash
./inventory_manager
```

Remove compiled files:

```bash
make clean
```

## C++ Features Used

The program uses `std::vector<Product>` to store and manage multiple products.

It also uses pass by reference, classes with public and private members, loops, and standard input/output.

## Program Structure

- `Product.h` and `Product.cpp` define individual products and their operations.
- `Inventory.h` and `Inventory.cpp` manage the collection of products.
- `main.cpp` handles the menu and user interaction.
- `Makefile` compiles and links the program.