#include <stdlib.h>
#include <string.h>
#include <stdio.h>

void program1();

struct Recipe{
char name[30];
int servings;
int quantity;
struct Ingredient* ing;

}

struct Book{
struct Book* next;
struct Recipe* food;

}

struct Ingredient{
char name[30];
int calBGram;
}

struct Book * newBook();

struct Recipe * newRecipe(char name[], int servings);


