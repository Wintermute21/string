/**  string - test size()
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

void test_size_0();
void test_size_1();
void test_size_3();
void test_size_20();

int main()
{
    test_size_0();
    test_size_1();
    test_size_3();
    test_size_20();
}

void test_size_0()
{
    // Setup fixture
    string empty("");

    // Test
    int size = empty.size();

    // Verify
    assert(size == 0);
}

void test_size_1()
{
    // Setup fixture
    string f("f");

    // Test
    int size = f.size();

    // Verify
    assert(size == 1);
}

void test_size_3()
{
    // Setup fixture
    string foo("foo");

    // Test
    int size = foo.size();

    // Verify
    assert(size == 3);
}

void test_size_20()
{
    // Setup fixture
    string twenty("01234567890123456789");

    // Test
    int size = twenty.size();

    // Verify
    assert(size == 20);
}

