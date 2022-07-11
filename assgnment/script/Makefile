C = g++
OBJ = ./obj
SRC = ./src
BIN = ./bin

CFLAGS = -c -g -Wall -Werror
LFLAGS = -o
IFLAGS = -I$(INC)
CVFLAGS = -v --tool=memcheck --leak-check=full --show-reachable=yes --log-file=valclient


$(BIN)/sysPrg: $(OBJ)/sysPrg.o
		$(CC) $(LFLAGS) $(BIN)/app $(OBJ)/sysprg.o


clean:
		@echo "Cleaning the Project"
		rm -f $(OBJ)/*.o
		rm -f a.out
		rm -f $(BIN)/sysPrg

valgrind:
		valgrind --leak-check=full $(BIN)/sysPrg
			mv valgrind $(BIN)
