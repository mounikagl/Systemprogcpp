CC = g++
LFLAGS = -o
CFLAGS = -c -g 
INC = ./inc
IFLAG = -I$(INC)
BIN = ./bin
OBJ = ./obj
SRC = ./src

all: sighandleq1 sighandleq2

sighandleq1: $(OBJ)/sighandleq1.o
		$(CC) $(LFLAGS) $(BIN)/sighandleq1 $(OBJ)/sighandleq1.o

$(OBJ)/sighandleq1.o: $(SRC)/sighandleq1.cpp
		$(CC) $(CFLAGS) $(IFLAG) $(SRC)/sighandleq1.cpp 
			mv *.o $(OBJ)

sighandleq2: $(OBJ)/sighandleq2.o
		$(CC) $(LFLAGS) $(BIN)/sighandleq2 $(OBJ)/sighandleq2.o

$(OBJ)/sighandleq2.o: $(SRC)/sighandleq2.cpp
		$(CC) $(CFLAGS) $(IFLAG) $(SRC)/sighandleq2.cpp 
			mv *.o $(OBJ)

clean:
	@echo "Cleaning is in Progress"
	rm -f a.out signalhandleq1
	rm -f *.o
	rm -f $(OBJ)/*.o
	rm -f $(BIN)/sighandleq1 $(BIN)/sighandleq2
	rm -f $(BIN)/*
	@echo "Done!"
