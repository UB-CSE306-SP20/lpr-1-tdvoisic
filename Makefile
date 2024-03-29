OS := $(shell uname -s)

ifeq ($(OS), Darwin)
  CUNIT_PATH_PREFIX = /usr/local/Cellar/cunit/2.1-3/
  CUNIT_DIRECTORY = cunit
endif
ifeq ($(OS), Linux)
  CUNIT_PATH_PREFIX = /util/CUnit/
  CUNIT_DIRECTORY = CUnit/
endif

CC = gcc
FLAGS = -g -Wall -std=c11 -fprofile-arcs -ftest-coverage

program.o: program.c
	$(CC) -c $(FLAGS) program.c

test.o: test.c
	$(CC) -c $(FLAGS) -I $(CUNIT_PATH_PREFIX)include/$(CUNIT_DIRECTORY) test.c

program: program.o
	$(CC) $(FLAGS) -o program program.o

runner: runner.c program.o
	$(CC) $(FLAGS) -o runner program.o runner.c

tests: program.o test.o
	$(CC) -g -Wall -fprofile-arcs -ftest-coverage -L $(CUNIT_PATH_PREFIX)lib -I $(CUNIT_PATH_PREFIX)include/$(CUNIT_DIRECTORY) -o tests program.o test.o -lcunit -lgcov


clean:
	rm -rf *~ *.o program tests runner *.dSYM *.xml *.gc??

