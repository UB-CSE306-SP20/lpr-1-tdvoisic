#include <stdlib.h>
#include <stdio.h>
#include "Ingredient.h"
#include "Recipe.h"
#include "Book.h"

int main(int argc, char * argv[]) {
  char * str1;
  char * str2;
  struct Book * b;
  b = newBook();
  struct Recipe * r;
  r = newRecipe("Milk", 1);
  struct Ingredient * i;
  i = newIngredient("Milk", 103);
  addIngredient(r, i, 244);
  addRecipe(b, r);
  str1 = toString(i);
  printf("Ingredient: %s\n",str1);
/*
  b = newBook();
printf("here");
  r = newRecipe("Tea, Earl Grey, hot", 1);
printf("here");
  i = newIngredient("Water", 0);
  str2 = toString(i);
  printf("Ingredient: %s\n",str2);
  addIngredient(r, i, 240);
  i = newIngredient("Earl Grey tea", 1);
  str2 = toString(i);
  printf("Ingredient: %s\n",str2);
  addIngredient(r, i, 2);
  addRecipe(b, r);
*/  
return 0;
}


  
