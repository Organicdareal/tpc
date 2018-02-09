# CC = g++
# CFLAGS = -Wall
# EXEC_NAME = mastermind
# INCLUDES =
# LIBS = pawn.cpp line.cpp mastermind.cpp
# OBJ_FILES = pawn.o line.o mastermind.o
# INSTALL_DIR = /usr/bin
#
# all : $(EXEC_NAME)
#
# clean :
# 	rm $(EXEC_NAME) $(OBJ_FILES)
#
# $(EXEC_NAME) : $(OBJ_FILES)
# 	$(CC) -o $(EXEC_NAME) $(OBJ_FILES) $(LIBS)
#
# %.o: %.cpp
# 	$(CC) $(CFLAGS) $(INCLUDES) -o $@ -c $<
#
# %.o: %.cc
# 	$(CC) $(CFLAGS) $(INCLUDES) -o $@ -c $<
#
# %.o: %.c
# 	gcc $(CFLAGS) $(INCLUDES) -o $@ -c $<
#
# install :
# 	cp $(EXEC_NAME) $(INSTALL_DIR)

EXE = Mastermind
CC = g++ -std=c++11
SOURCES = mastermind.cpp pawn.cpp line.cpp

exe: compile
	./$(EXE)

compile:
	$(CC) -o $(SOURCES)

clean:
	rm -f a.out a.o $(EXE)

depend :
	makedepend $(SOURCES)
