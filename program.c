#include <stdlib.h>
#include <stdbool.h>
#include "program.h"


struct Book * newBook(){
struct Book * book = malloc(sizeof(book));
return book;
}

struct Recipe * newRecipe(char name[], int servings){
struct Recipe * rec = malloc(sizeof(rec));
return rec;
}

struct Ingredient * newIngredient(char name[], int caloeriesPerGram){
struct Ingredient * ing = malloc(sizeof(ing));
return ing;
}

struct Pantry * newPantry(){
struct Pantry * pan = malloc(sizeof(pan));
}

void addRecipe(struct Book* entry, struct Recipe* food){

}

void addIngredient(struct Recipe* food, struct Ingredient* part, int quantity){

}

void storeIngredient(struct Pantry* store, struct Ingredient* part, int quantity){

}


