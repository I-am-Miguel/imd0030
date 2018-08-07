BIN = ./bin
BUILD = ./build
DOC = ./doc
INC = ./include
SRC = ./src

EXEC = exemplo01

GCC = g++

GCCFLAGS = -Wall -pedantic -std=c++11 -I$(INC)


OBJ = $(BUILD)/circulo.o $(BUILD)/retangulo.o $(BUILD)/triangulo.o $(BUILD)/calculadorArea.o $(BUILD)/main.o

all: $(OBJ)
	$(GCC) -o $(BIN)/$(EXEC) $(OBJ) $(LDFLAGS)

$(BUILD)/circulo.o: $(INC)/circulo.h $(SRC)/circulo.cpp
	$(GCC) $(GCCFLAGS) -c $(SRC)/circulo.cpp -o $@

$(BUILD)/retangulo.o: $(INC)/retangulo.h $(SRC)/retangulo.cpp
	$(GCC) $(GCCFLAGS) -c $(SRC)/retangulo.cpp -o $@

$(BUILD)/triangulo.o: $(INC)/triangulo.h $(SRC)/triangulo.cpp
	$(GCC) $(GCCFLAGS) -c $(SRC)/triangulo.cpp -o $@

$(BUILD)/calculadorArea.o: $(INC)/calculadorArea.h $(SRC)/calculadorArea.cpp
	$(GCC) $(GCCFLAGS) -c $(SRC)/calculadorArea.cpp -o $@

$(BUILD)/main.o: $(SRC)/main.cpp $(BUILD)/circulo.o $(BUILD)/retangulo.o $(BUILD)/triangulo.o $(BUILD)/calculadorArea.o
	$(GCC) $(GCCFLAGS) -c $(SRC)/main.cpp -o $@


clear:
	rm -f $(OBJ)
	rm -f $(BIN)/$(EXEC)

run:
	$(BIN)/$(EXEC)