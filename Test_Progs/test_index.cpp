/**  string - test operator[]()
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

void test_index_0();
void test_index_1();
void test_index_last();
void test_index_return_ref();

int main()
{
    test_index_0();
    test_index_1();
    test_index_last();
    test_index_return_ref();
}

void test_index_0()
{
    // Setup fixture
    string str_012345("012345");

    // Test
    char chr = str_012345[0];

    // Verify
    assert(chr == '0');
}

void test_index_1()
{
    // Setup fixture
    string str_012345("012345");

    // Test
    char chr = str_012345[1];

    // Verify
    assert(chr == '1');
}

void test_index_last()
{
    // Setup fixture
    string str_012345("012345");

    // Test
    char chr = str_012345[5];

    // Verify
    assert(chr == '5');
}

void test_index_return_ref()
{
    // Setup fixture
    string str_7("A");

    // Test
    ++str_7[0];

    // Verify
    assert(str_7[0] == 'B');
}

