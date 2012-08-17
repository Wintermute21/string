/**  string - string += char
 *       Uses c_str()
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

void test_add_assign_char_big_strings_1();
void test_add_assign_char_big_strings_2();

int main()
{
    test_add_assign_char_big_strings_1();
    test_add_assign_char_big_strings_2();
}

void test_add_assign_char_big_strings_1()
{
    // SETUP FIXTURE
    // Array for C-string, leave room for '\0'
    //const int ARR_SIZE = 100001;
    const int ARR_SIZE = 1001;
    char c_string[ARR_SIZE];

    // Size of the C-string
    const string::size_type STR_SIZE = ARR_SIZE - 1;

    // string object to test
    string big;

    // TEST
    // Put chars in C-string and the test object
    for (string::size_type idx = 0; idx < STR_SIZE; ++idx)
    {
        c_string[idx] = 'x';
        big          += 'x';
    }

    // Terminate C-string
    c_string[STR_SIZE] = '\0';

    // VERIFY
    string::size_type big_size = big.size();

    // Verify size and characters
    assert( ! strncmp(big.c_str(), c_string, STR_SIZE) );
    assert(big_size == STR_SIZE);

    // Verify using C-string constructor and ==
    //assert(big == string(c_string));
    string str_1(c_string);
    assert(big == str_1);


    //cout << "C-string size = " << STR_SIZE << "\n";
}

void test_add_assign_char_big_strings_2()
{
    // SETUP FIXTURE
    // Loop limit
    const string::size_type LIMIT = 100;

    // main string object to test
    string test_str;

    // Var to keep track of size of main test string
    string::size_type test_str_size = 0;

    // Append repreatedly to main test string
    for (string::size_type idx = 0; idx < LIMIT; ++idx)
    {
        string::size_type add_on_size = idx + 1;
        test_str_size += add_on_size ;

        // Create string to += on to test string
        string add_on(add_on_size, 'x');

        // TEST
        // test string += string
        test_str += add_on;

        // VERIFY
        // Verify length
        assert(test_str.size() == test_str_size);

        // Create a string equivalent to the main test string
        string equivalent(test_str_size, 'x');

        // Compare
        assert(test_str == equivalent);
    }
}

