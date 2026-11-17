all: inventory_manager

Product.o: Product.cpp Product.h
	g++ -c Product.cpp

Inventory.o: Inventory.cpp Inventory.h Product.h
	g++ -c Inventory.cpp

main.o: main.cpp Inventory.h Product.h
	g++ -c main.cpp

inventory_manager: main.o Product.o Inventory.o
	g++ -o inventory_manager main.o Product.o Inventory.o

clean:
	rm -f *.o inventory_manager