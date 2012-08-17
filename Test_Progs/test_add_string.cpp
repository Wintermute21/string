/**  string - Test: string + string
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

void test_add_string_first_shorter();
void test_add_string_first_longer();
void test_add_string_first_empty();
void test_add_string_second_empty();

int main()
{
    test_add_string_first_shorter();
    test_add_string_first_longer();
    test_add_string_first_empty();
    test_add_string_second_empty();
}

void test_add_string_first_shorter()
{
    // Setup fixture
    string FOO("FOO");
    string barbar("barbar");
    string result_FOO_barbar;

    // Test
    result_FOO_barbar = FOO + barbar;

    // Verify
    assert(FOO               == "FOO");
    assert(barbar            == "barbar");
    assert(result_FOO_barbar == "FOObarbar");

    assert(FOO.size()               == 3);
    assert(barbar.size()            == 6);
    assert(result_FOO_barbar.size() == 9);
}

void test_add_string_first_longer()
{
    // Setup fixture
    string abcdef("abcdef");
    string XYZ("XYZ");
    string result_abcdef_XYZ;

    // Test
    result_abcdef_XYZ = abcdef + XYZ;

    // Verify
    assert(abcdef            == "abcdef");
    assert(XYZ               == "XYZ");
    assert(result_abcdef_XYZ == "abcdefXYZ");

    assert(abcdef.size()            == 6);
    assert(XYZ.size()               == 3);
    assert(result_abcdef_XYZ.size() == 9);
}

void test_add_string_first_empty()
{
    // Setup fixture
    string empty;
    string nonempty("nonempty");
    string result_empty_nonempty;

    // Test
    result_empty_nonempty = empty + nonempty;

    // Verify
    assert(empty                 == "");
    assert(nonempty              == "nonempty");
    assert(result_empty_nonempty == "nonempty");

    assert(empty.size()                 == 0);
    assert(nonempty.size()              == 8);
    assert(result_empty_nonempty.size() == 8);
}

void test_add_string_second_empty()
{
    // Setup fixture
    string something("something");
    string nothing;
    string result_nothing_something;

    // Test
    result_nothing_something = something + nothing ;

    // Verify
    assert(something                == "something");
    assert(nothing                  == "");
    assert(result_nothing_something == "something");

    assert(something.size()                == 9);
    assert(nothing.size()                  == 0);
    assert(result_nothing_something.size() == 9);
}

