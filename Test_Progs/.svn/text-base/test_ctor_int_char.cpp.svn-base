/**  string - Test: int, char constructor
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

void test_int_char_ctor_size_3();
void test_int_char_ctor_size_9();
void test_int_char_ctor_size_0();

int main()
{
    test_int_char_ctor_size_3();
    test_int_char_ctor_size_9();
    test_int_char_ctor_size_0();
}

void test_int_char_ctor_size_3()
{
    // Setup fixture

    // Test
    string x3(3, 'x');

    // Verify
    assert(x3 == "xxx");
    assert(x3.size() == 3);
}

void test_int_char_ctor_size_9()
{
    // Setup fixture

    // Test
    string b9(9, 'b');

    // Verify
    assert(b9 == "bbbbbbbbb");
    assert(b9.size() == 9);
}

void test_int_char_ctor_size_0()
{
    // Setup fixture

    // Test
    string d0(0, 'd');

    // Verify
    assert(d0 == "");
    assert(d0.size() == 0);
}

