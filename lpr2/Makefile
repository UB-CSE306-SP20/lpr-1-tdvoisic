# Makefile generated automatically by makeMake, version 1.0, on Thu May  3 08:55:27 EDT 2018

# Variables used by makefile


ifeq ($(OS), Darwin)
  CUNIT_PATH_PREFIX = /usr/local/Cellar/cunit/2.1-3/
  CUNIT_DIRECTORY = cunit
endif
ifeq ($(OS), Linux)
  CUNIT_PATH_PREFIX = /util/CUnit/
  CUNIT_DIRECTORY = CUnit/
endif


CC=gcc
CFLAGS=-Wall -std=c11 -g
EXE=main
OBJECTS=Recipe.o Pantry.o NodeRecipe.o NodeIngredientQuantity.o Ingredient.o Book.o 

# Recipes for targets

Book.o: Book.c Book.h
	$(CC) $(CFLAGS) -c Book.c

test.o: test.c
	$(CC) -c $(FLAGS) -I $(CUNIT_PATH_PREFIX)include/$(CUNIT_DIRECTORY) test.c

Ingredient.o: Ingredient.c Ingredient.h
	$(CC) $(CFLAGS) -c Ingredient.c

NodeIngredientQuantity.o: NodeIngredientQuantity.c \
  NodeIngredientQuantity.h
	$(CC) $(CFLAGS) -c NodeIngredientQuantity.c

NodeRecipe.o: NodeRecipe.c NodeRecipe.h
	$(CC) $(CFLAGS) -c NodeRecipe.c

Pantry.o: Pantry.c Pantry.h
	$(CC) $(CFLAGS) -c Pantry.c

Recipe.o: Recipe.c Recipe.h
	$(CC) $(CFLAGS) -c Recipe.c

main: $(OBJECTS)
	$(CC) -o $(EXE) $(OBJECTS) $(EXE).c -lm

tests: $(OBJECTS) test.o
        $(CC) -g -Wall -fprofile-arcs -ftest-coverage -L $(CUNIT_PATH_PREFIX)lib -I $(CUNIT_PATH_PREFIX)include/$(CUNIT_DIRECTORY) -o tests $(OBJECTS) test.o -lcunit -lgcov

# PHONY targets

.PHONY: clean
clean:
	rm -rf *~ $(OBJECTS) $(EXE) *.zip

# End of makefile
