INCLUDES= -I ./include
FLAGS= -g
all:
	gcc ${FLAGS} ${INCLUDES} ./src/main.c -L ./lib -lSDL2main -lSDL2 -lmingw32 -o ./bin/main