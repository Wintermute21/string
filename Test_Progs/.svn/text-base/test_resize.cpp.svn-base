/**  string - Test: resize()
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

void test_resize_make_smaller();
void test_resize_make_bigger();
void test_resize_make_much_bigger();

int main()
{
    test_resize_make_smaller();
    test_resize_make_bigger();
    test_resize_make_much_bigger();
}

void test_resize_make_smaller()
{
    // Setup fixture
    string gandalf("gandalf");

    // Test
    gandalf.resize(4);

    // Verify
    assert(gandalf.size() == 4);
    assert(gandalf        == "gand");
}

void test_resize_make_bigger()
{
    // Setup fixture
    string bilbo("bilbo");

    // Test
    bilbo.resize(8);

    // Verify
    assert(bilbo.size() == 8);
}

void test_resize_make_much_bigger()
{
    // Setup fixture
    string bilbo("bilbo");

    // Test
    bilbo.resize(800);

    // Verify
    assert(bilbo.size() == 800);
  //assert(bilbo        == "bilbo");
}


