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
strcut Book* head;
struct Recipe* food;

}

struct Ingredient{
char name[30];
int calBGram;
}

struct Pantry{
struct Ingredient* parts;
int quantities;
}

struct Book * newBook();

struct Recipe * newRecipe(char name[], int servings);

struct Ingredient * newIngredient(char name[], int caloeriesPerGram);

struct Pantry * newPantry();

void addRecipe(struct Book* entry, struct Recipe* food);

void addIngredient(struct Recipe* food, struct Ingredient* part, int quantity);

void storeIngredient(struct Pantry* store, struct Ingredient* part, int quantity);
 
