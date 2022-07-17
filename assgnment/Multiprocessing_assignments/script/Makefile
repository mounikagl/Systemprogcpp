CC = g++
LFLAGS = -o
CFLAGS = -c -g -Wall -Werror
INC = ./inc
IFLAG = -I$(INC)
BIN = ./bin
OBJ = ./obj
SRC = ./src

all: multiassgn

multiassgn: $(OBJ)/multiassgn.o
	$(CC) $(LFLAGS) $(BIN)/multiassgn $(OBJ)/multiassgn.o

$(OBJ)/multiassgn.o: $(SRC)/multiassgn.cpp
	$(CC) $(CFLAGS) $(IFLAG) $(SRC)/multiassgn.cpp 
	mv *.o $(OBJ)


clean:
	@echo "Cleaning is in Progress"
	rm -f a.out multiassgn
	rm -f *.o
	rm -f $(OBJ)/*.o
	rm -f $(BIN)/multiassgn 
	@echo "Done!"
													
