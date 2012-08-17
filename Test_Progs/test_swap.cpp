/**  string - test swap
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

void test_swap_first_shorter();
void test_swap_first_empty();

int main()
{
    test_swap_first_shorter();
    test_swap_first_empty();
}

void test_swap_first_shorter()
{
    // Setup fixture
    string foo("foo");
    string barbar("barbar");

    // Test
    foo.swap(barbar);

    // Verify
    assert(foo == "barbar");
    assert(barbar == "foo");
    assert(foo.size()    == 6);
    assert(barbar.size() == 3);
}

void test_swap_first_empty()
{
    // Setup fixture
    string empty;
    string foofoo("foofoo");

    // Test
    empty.swap(foofoo);

    // Verify
    assert(foofoo == "");
    assert(empty == "foofoo");
    assert(foofoo.size() == 0);
    assert(empty.size()  == 6);
}

