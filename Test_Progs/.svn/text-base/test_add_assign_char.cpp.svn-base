//  string - string += char
//       Uses c_str()
//

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

void test_add_assign_char_to_nonempty();
void test_add_assign_char_to_empty();
void test_add_assign_char_to_10();
void test_add_assign_char_to_10000();
void test_add_assign_char_return_ref();

int main()
{
    test_add_assign_char_to_nonempty();
    test_add_assign_char_to_empty();
    test_add_assign_char_to_10();
    test_add_assign_char_to_10000();
    test_add_assign_char_return_ref();
}

void test_add_assign_char_to_nonempty()
{
    // Setup fixture
    string foo("foo");

    // Test
    foo += 'b';

    // Verify
    assert(foo == "foob");
    assert(foo.size() == 4);
}

void test_add_assign_char_to_empty()
{
    // Setup fixture
    string empty;

    // Test
    empty += 'x';

    // Verify
    assert(empty == "x");
    assert(empty.size() == 1);
}

void test_add_assign_char_to_10()
{
    // Setup fixture
    string foo("foo");

    // Test
    foo += '1';
    foo += '2';
    foo += '3';
    foo += '4';
    foo += '5';
    foo += '6';
    foo += '7';
    foo += '8';
    foo += '9';
    foo += 'A';

    // Verify
    assert(foo == "foo123456789A");
    assert(foo.size() == 13);
}

void test_add_assign_char_to_10000()
{
    // Setup fixture
    const int  ARRAY_SIZE = 10;
    const char chars[ARRAY_SIZE] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9' };
    const int  LIMIT = 10000;
    string     foo;

    // Test
    for (int ctr = 0; ctr < LIMIT; ++ctr)
        foo += chars[ ctr % ARRAY_SIZE ];

    // Verify
    for (int ctr = 0; ctr < LIMIT; ++ctr)
        assert(foo[ctr] == chars[ctr % ARRAY_SIZE]);
}

void test_add_assign_char_return_ref()
{
    // Setup fixture
    string str_1("");

    // Test
    (str_1 += 'a')[0] = 'X';

    // Verify
    assert(str_1.size() == 1);
    assert(str_1 == "X");
}

