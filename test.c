#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#include "CUnit.h"
#include "Basic.h"
#include "program.h"


void testRecipe(char name[], int servings);
void testBook(struct Book * b);
void testIng(char name[], int cal);
void testPan(struct Pantry * p);

void testRecipe(char name[], int servings){
struct Recipe * test = newRecipe(name, servings);
int serve = test->servings;

char title[15];
strcpy(title, test->name);
printf("title: \"%s\", serve: \"%d\"...",title,serve);
CU_ASSERT_EQUAL(serve, servings);
CU_ASSERT_EQUAL(title, name);
}

void testBook(struct Book * b){
struct Book * test = newBook();
CU_ASSERT_EQUAL(b, test); 
}

void testIng(char name[], int cal){
struct Ingredient * test = newIngredient(name, cal);
int aCal = test->calBGram;
char aName[15];
strcpy(aName, test->name);
CU_ASSERT_EQUAL(aCal, cal);
CU_ASSERT_EQUAL(aName, name);
}

void testPan(struct Pantry * p){
struct Pantry * test = newPantry();
CU_ASSERT_EQUAL(p, test);

}

void test1(void){

char name[] = "Ziti";
int servings = 5;
testRecipe(name, servings);
}


void test2(void){
struct Book * b = malloc(sizeof(b));
testBook(b);
}

void test3(void){
char name[] = "pepper";
int c = 5;
testIng(name, c);
}

void test4(void){
struct Pantry * p = malloc(sizeof(p));
testPan(p);
}

void test5(void){
}

void test6(void){
}
void test7(void){

}



/* The main() function for setting up and running the tests.
 * Returns a CUE_SUCCESS on successful running, another
 * CUnit error code on failure.
 */
int main()
{
   CU_pSuite pSuite = NULL;

   /* initialize the CUnit test registry */
   if (CUE_SUCCESS != CU_initialize_registry()) { return CU_get_error(); }

   /* add a suite to the registry */
   pSuite = CU_add_suite("Suite_1", NULL, NULL);
   if (NULL == pSuite) {
      CU_cleanup_registry();
      return CU_get_error();
   }

   /* add the tests to the suite */
   if (
        
	(NULL == CU_add_test(pSuite, "test1", test1))
	||(NULL == CU_add_test(pSuite, "test2", test2))
	||(NULL == CU_add_test(pSuite, "test3", test3))
	||(NULL == CU_add_test(pSuite, "test4", test4))
	||(NULL == CU_add_test(pSuite, "test5", test5))
	||(NULL == CU_add_test(pSuite, "test6", test6))
	||(NULL == CU_add_test(pSuite, "test7", test7))
	
      )
   {
      CU_cleanup_registry();
      return CU_get_error();
   }

   /* Run all tests using the CUnit Basic interface */
   CU_basic_set_mode(CU_BRM_VERBOSE);
   CU_basic_run_tests();
   //   CU_basic_show_failures(CU_get_failure_list());
   CU_cleanup_registry();
   return CU_get_error();
}
