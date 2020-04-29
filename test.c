#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "CUnit.h"
#include "Basic.h"
#include "program.h"


void testRecipe(struct Recipe * calc, char name[], int servings);



void test1(void){
}

void test2(void){

}

void test3(void){
}

void test4(void){
}

void test5(void){
}

void test6(void){
}
void test7(void){

}


void testRecipe(struct Recipe * calc, char name[], int servings){
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
          (NULL == CU_add_test(pSuite, "test00", test00))
	||(NULL == CU_add_test(pSuite, "test1", test1))
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
