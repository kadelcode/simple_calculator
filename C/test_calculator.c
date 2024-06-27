#include <CUnit/CUnit.h>
#include <CUnit/Basic.h>
#include "calculator.h"

void test_add() {
	CU_ASSERT_DOUBLE_EQUAL(add(3, 2), 5, 0.0001);
	CU_ASSERT_DOUBLE_EQUAL(add(1, -1), 0, 0.0001);
}

void test_subtract() {
	CU_ASSERT_DOUBLE_EQUAL(subtract(5, 2), 3, 0.0001);
	CU_ASSERT_DOUBLE_EQUAL(subtract(-1, 1), -2, 0.0001);
	CU_ASSERT_DOUBLE_EQUAL(subtract(-5, -3), -2, 0.0001);
}

void test_multiply() {
	CU_ASSERT_DOUBLE_EQUAL(multiply(3, 2), 6, 0.0001);
	CU_ASSERT_DOUBLE_EQUAL(multiply(-1, 1), -1, 0.0001);
}

void test_divide() {
	CU_ASSERT_DOUBLE_EQUAL(divide(4, 2), 2, 0.0001);
	CU_ASSERT_DOUBLE_EQUAL(divide(1, 0), -1, 0.0001); // Assuming divide returs -1 for division by zero
}

int main() {
	CU_initialize_registry();

	CU_pSuite suite = CU_add_suite("Arithmetic Test Suite", 0, 0);

	CU_add_test(suite, "test of add()", test_add);
	CU_add_test(suite, "test of subtract()", test_subtract);
	CU_add_test(suite, "test of multiply()", test_multiply);
	CU_add_test(suite, "test of divide()", test_divide);

	CU_basic_set_mode(CU_BRM_VERBOSE);
	CU_basic_run_tests();

	CU_cleanup_registry();

	return (0);
}
