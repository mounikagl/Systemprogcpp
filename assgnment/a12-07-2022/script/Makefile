CC = g++
LFLAGS = -o
CFLAGS = -c -g -Wall -Werror
INC = ./inc
IFLAG = -I$(INC)
BIN = ./bin
OBJ = ./obj
SRC = ./src

all: sysPrg2

sysPrg2: $(OBJ)/sysPrg2.o
		$(CC) $(LFLAGS) $(BIN)/sysPrg2 $(OBJ)/sysPrg2.o

$(OBJ)/sysPrg2.o: $(SRC)/sysPrg2.cpp
		$(CC) $(CFLAGS) $(IFLAG) $(SRC)/sysPrg2.cpp 
			mv *.o $(OBJ)


clean:
		@echo "Cleaning is in Progress"
		rm -f a.out sysPrg1
		rm -f *.o
		rm -f $(OBJ)/*.o
		rm -f $(BIN)/sysPrg1 $(BIN)/sysPrg2 $(BIN)/sysPrg3
		rm -f $(BIN)/sysPrg4 $(BIN)/sysPrg5
		@echo "Done!"


