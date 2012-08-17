/**  string - Test: string + char
 *
 *   Note: Maybe there is some redundant testing here that should be removed.
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

void test_add_char_result_initially_empty();
void test_add_char_result_initially_nonempty();

int main()
{
    test_add_char_result_initially_empty();
    test_add_char_result_initially_nonempty();
}

void test_add_char_result_initially_empty()
{
    // Setup fixture
    string foo("foo");
    char   b('b');
    string result_foo_b;

    // Test
    result_foo_b = foo + b;

    // Verify
    assert(foo          == "foo");
    assert(result_foo_b == "foob");

    assert(foo.size()          == 3);
    assert(result_foo_b.size() == 4);
}

void test_add_char_result_initially_nonempty()
{
    // Setup fixture
    string empty;
    char   x('x');
    string result_empty_x("x");

    // Test
    result_empty_x = empty + x;

    // Verify
    assert(empty          == "");
    assert(result_empty_x == "x");

    assert(empty.size()          == 0);
    assert(result_empty_x.size() == 1);
}

