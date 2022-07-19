CC = g++
LFLAGS = -o
CFLAGS = -c -g -Wall -Werror
INC = ./inc
IFLAG = -I$(INC)
BIN = ./bin
OBJ = ./obj
SRC = ./src

all: sighandle

sighandle: $(OBJ)/sighandle.o
		$(CC) $(LFLAGS) $(BIN)/sighandle $(OBJ)/sighandle.o

$(OBJ)/sighandle.o: $(SRC)/sighandle.cpp
		$(CC) $(CFLAGS) $(IFLAG) $(SRC)/sighandle.cpp 
			mv *.o $(OBJ)


clean:
	@echo "Cleaning is in Progress"
	rm -f a.out sighandle
	rm -f *.o
	rm -f $(OBJ)/*.o
	rm -f $(BIN)/sighandle
	@echo "Done!"
