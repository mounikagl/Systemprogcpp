CC = g++
LFLAGS = -o
CFLAGS = -c -g -Wall -Werror
INC = ./inc
IFLAG = -I$(INC)
BIN = ./bin
OBJ = ./obj
SRC = ./src

all: inheritanceprg1

inheritanceprg1: $(OBJ)/inheritanceprg1.o
				$(CC) $(LFLAGS) $(BIN)/inheritanceprg1 $(OBJ)/inheritanceprg1.o

$(OBJ)/inheritanceprg1.o: $(SRC)/inheritanceprg1.cpp
				$(CC) $(CFLAGS) $(IFLAG) $(SRC)/inheritanceprg1.cpp 
					mv *.o $(OBJ)


clean:
		@echo "Cleaning is in Progress"
		rm -f a.out inheritanceprg1
		rm -f *.o
		rm -f $(OBJ)/*.o
		rm -f $(BIN)/inheritanceprg1 
		@echo "Done!"
