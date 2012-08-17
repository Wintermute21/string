/**  string - Test: clear()
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

void test_clear_nonempty();
void test_clear_empty();

int main()
{
    test_clear_nonempty();
    test_clear_empty();
}

void test_clear_nonempty()
{
    // Setup fixture
    string brocolli("brocolli");

    // Test
    brocolli.clear();

    // Verify
    assert(brocolli.size() == 0);
    assert(brocolli        == "");
}

void test_clear_empty()
{
    // Setup fixture
    string empty;

    // Test
    empty.clear();

    // Verify
    assert(empty.size() == 0);
    assert(empty        == "");
}


