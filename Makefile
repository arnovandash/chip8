INCLUDES= -I ./include
FLAGS= -g
all:
	gcc ${FLAGS} ${INCLUDES} ./src/main.c -lmingw32 -o ./bin/main