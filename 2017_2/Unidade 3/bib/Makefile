CC=g++

LIB=./lib
INCLUDE=./include
SRC=./src
BUILD=./build
BIN=./bin

LIBFLAGS = -lProdutos
FLAGS = -Wall -pedantic -std=c++11

main: libProdutos.a
	$(CC) $(SRC)/main.cpp $(FLAGS) -I$(INCLUDE) -L$(LIB) $(LIBFLAGS) -o $(BIN)/$@

libProdutos.a:
	$(CC) -c $(SRC)/produto.cpp $(FLAGS) -I$(INCLUDE) -o $(BUILD)/produto.o 
	$(CC) -c $(SRC)/fruta.cpp $(FLAGS) -I$(INCLUDE) -o $(BUILD)/fruta.o
	$(CC) -c $(SRC)/bebida.cpp $(FLAGS) -I$(INCLUDE) -o $(BUILD)/bebida.o
	$(CC) -c $(SRC)/roupa.cpp $(FLAGS) -I$(INCLUDE) -o $(BUILD)/roupa.o
	ar -cru $(LIB)/libProdutos.a $(BUILD)/produto.o $(BUILD)/roupa.o $(BUILD)/fruta.o $(BUILD)/bebida.o

clean:
	rm $(BIN)/main $(SRC)/*~ $(BUILD)/*o $(LIB)/*a