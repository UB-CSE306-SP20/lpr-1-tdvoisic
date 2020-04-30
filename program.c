#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include "program.h"


struct Book * newBook(){
struct Book * book = malloc(sizeof(book));
return book;
}

struct Recipe * newRecipe(char name[], int servings){
struct Recipe * rec = malloc(sizeof(rec));
strcpy(rec->name, name);
rec->servings = servings;
return rec;
}

struct Ingredient * newIngredient(char name[], int caloriesPerGram){
struct Ingredient * ing = malloc(sizeof(ing));
strcpy(ing->name, name);
ing->calBGram = caloriesPerGram;
return ing;
}

struct Pantry * newPantry(){
struct Pantry * pan = malloc(sizeof(pan));
return pan;
}

void addRecipe(struct Book* entry, struct Recipe* food){
entry->next = food;
}

void addIngredient(struct Recipe* food, struct Ingredient* part, int quantity){

}

void storeIngredient(struct Pantry* store, struct Ingredient* part, int quantity){

}


