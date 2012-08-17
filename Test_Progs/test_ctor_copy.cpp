/**  string - test copy constructor
 */

#ifdef STD_STRING
  #include <string>
  using std::string;
#else
  #include "string.h"
  using cs33001::string;
#endif

#include <iostream>
#include <cassert>
using std::cin;
using std::cout;
using std::cerr;

void test_copy_ctor_nonempty();
void test_copy_ctor_empty();
void test_copy_ctor_default();
void test_copy_ctor_change_original();

int main()
{
    test_copy_ctor_nonempty();
    test_copy_ctor_empty();
    test_copy_ctor_default();
    test_copy_ctor_change_original();
}

void test_copy_ctor_nonempty()
{
    // Setup fixture
    string foo_1("foo");

    // Test
    string foo_2(foo_1);

    // Verify
    assert(foo_1 == foo_2);
}

void test_copy_ctor_empty()
{
    // Setup fixture
    string empty_1("");

    // Test
    string empty_2(empty_1);

    // Verify
    assert(empty_1 == empty_2);
}

void test_copy_ctor_default()
{
    // Setup fixture
    string default_1;

    // Test
    string default_2(default_1);

    // Verify
    assert(default_1 == default_2);
}

void test_copy_ctor_change_original()
{
    // Setup fixture
    string original("Original");

    // Test
    string copy(original);
    original[0] = 'X';

    // Verify
    assert(original == "Xriginal");
    assert(copy     == "Original");
}

