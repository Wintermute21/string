/**  string - Test: c_str()
 */

#ifdef STD_STRING
  #include <string>
  using std::string;
#else
  #include "string.h"
  using cs33001::string;
#endif

#include <iostream>
#include <cstring>
#include <cassert>
using std::cin;
using std::cout;
using std::cerr;

void test_c_str_short_string();
void test_c_str_size_1();
void test_c_str_size_0();

int main()
{
    test_c_str_short_string();
    test_c_str_size_1();
    test_c_str_size_0();
}

void test_c_str_short_string()
{
    // Setup fixture
    string frodo("frodo");

    // Test
    const char* frodo_c_str = frodo.c_str();

    // Verify
    assert(strlen(frodo_c_str) == 5);
    assert( ! strcmp(frodo_c_str, "frodo") );
    assert(frodo == "frodo");
    assert(frodo.size() == 5);
}

void test_c_str_size_1()
{
    // Setup fixture
    string size_one("X");

    // Test
    const char* size_one_c_str = size_one.c_str();

    // Verify
    assert(strlen(size_one_c_str) == 1);
    assert( ! strcmp(size_one_c_str, "X") );
    assert(size_one == "X");
    assert(size_one.size() == 1);
}

void test_c_str_size_0()
{
    // Setup fixture
    string empty;

    // Test
    const char* empty_c_str = empty.c_str();

    // Verify
    assert(strlen(empty_c_str) == 0);
    assert( ! strcmp(empty_c_str, "") );
    assert(empty == "");
    assert(empty.size() == 0);
}

