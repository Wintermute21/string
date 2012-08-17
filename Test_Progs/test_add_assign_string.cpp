/**  string - string += string
 *       Uses c_str(), string(int, char)
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

void test_add_assign_string_first_shorter();
void test_add_assign_string_first_longer();
void test_add_assign_string_first_empty();
void test_add_assign_string_second_empty();
void test_add_assign_char_change_original();
void test_add_assign_char_return_ref();

int main()
{
    test_add_assign_string_first_shorter();
    test_add_assign_string_first_longer();
    test_add_assign_string_first_empty();
    test_add_assign_string_second_empty();
    test_add_assign_char_change_original();
    test_add_assign_char_return_ref();
}

void test_add_assign_string_first_shorter()
{
    // Setup fixture
    string FOO("FOO");
    string barbar("barbar");

    // Test
    FOO += barbar;

    // Verify
    assert(FOO    == "FOObarbar");
    assert(barbar == "barbar");
    assert(FOO.size()    == 9);
    assert(barbar.size() == 6);
}

void test_add_assign_string_first_longer()
{
    // Setup fixture
    string abcdef("abcdef");
    string XYZ("XYZ");

    // Test
    abcdef += XYZ;

    // Verify
    assert(abcdef == "abcdefXYZ");
    assert(XYZ    == "XYZ");
    assert(abcdef.size() == 9);
    assert(XYZ.size()    == 3);
}

void test_add_assign_string_first_empty()
{
    // Setup fixture
    string empty;
    string nonempty("nonempty");

    // Test
    empty += nonempty;

    // Verify
    assert(empty    == "nonempty");
    assert(nonempty == "nonempty");
    assert(empty.size()    == 8);
    assert(nonempty.size() == 8);
}

void test_add_assign_string_second_empty()
{
    // Setup fixture
    string something("something");
    string nothing;

    // Test
    something += nothing ;

    // Verify
    assert(something == "something");
    assert(nothing   == "");
    assert(something.size() == 9);
    assert(nothing.size()   == 0);
}

void test_add_assign_char_change_original()
{
    // Setup fixture
    string str_1("");
    string str_2("Yo");

    // Test
    str_1 += str_2;
    str_2[0] = 'X';

    // Verify
    assert(str_1   == "Yo");
    assert(str_2   == "Xo");
    assert(str_1.size() == 2);
    assert(str_2.size() == 2);
}

void test_add_assign_char_return_ref()
{
    // Setup fixture
    string str_1("Hello");
    string str_2;

    // Test
    (str_2 += str_1)[0] = 'Y';

    // Verify
    assert(str_1   == "Hello");
    assert(str_2   == "Yello");
    assert(str_1.size() == 5);
    assert(str_2.size() == 5);
}

