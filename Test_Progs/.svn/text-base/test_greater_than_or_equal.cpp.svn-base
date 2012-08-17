/**  string - Test: >=
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

void test_greater_than_or_equal_sizes_equal();
void test_greater_than_or_equal_first_shorter_false();
void test_greater_than_or_equal_first_shorter_true();
void test_greater_than_or_equal_first_longer_false();
void test_greater_than_or_equal_first_longer_true();
void test_greater_than_or_equal_first_empty();
void test_greater_than_or_equal_second_empty();
void test_greater_than_or_equal_both_empty();
void test_greater_than_or_equal_substring_first_longer();
void test_greater_than_or_equal_substring_first_shorter();

int main()
{
    test_greater_than_or_equal_sizes_equal();
    test_greater_than_or_equal_first_shorter_false();
    test_greater_than_or_equal_first_shorter_true();
    test_greater_than_or_equal_first_longer_false();
    test_greater_than_or_equal_first_longer_true();
    test_greater_than_or_equal_first_empty();
    test_greater_than_or_equal_second_empty();
    test_greater_than_or_equal_both_empty();
    test_greater_than_or_equal_substring_first_longer();
    test_greater_than_or_equal_substring_first_shorter();
}

void test_greater_than_or_equal_sizes_equal()
{
    // Setup fixture
    string lavendar_1("lavendar");
    string lavendar_2("lavendar");

    // Test
    bool result_1 = lavendar_1 >= lavendar_2;

    // Verify
    assert(result_1 == true);
}

void test_greater_than_or_equal_first_shorter_false()
{
    // Setup fixture
    string rose("rose");
    string zinnia("zinnia");

    // Test
    bool result_2 = rose >= zinnia;

    // Verify
    assert(result_2 == false);
}

void test_greater_than_or_equal_first_shorter_true()
{
    // Setup fixture
    string rose("rose");
    string carnation("carnation");

    // Test
    bool result_3 = rose >= carnation;

    // Verify
    assert(result_3 == true);
}

void test_greater_than_or_equal_first_longer_false()
{
    // Setup fixture
    string portulaca("portulaca");
    string tulip("tulip");

    // Test
    bool result_4 = portulaca >= tulip;

    // Verify
    assert(result_4 == false);
}

void test_greater_than_or_equal_first_longer_true()
{
    // Setup fixture
    string petunia("petunia");
    string mum("mum");

    // Test
    bool result_5 = petunia >= mum;

    // Verify
    assert(result_5 == true);
}

void test_greater_than_or_equal_first_empty()
{
    // Setup fixture
    string empty;
    string marigold("marigold");

    // Test
    bool result_6 = empty >= marigold;

    // Verify
    assert(result_6 == false);
}

void test_greater_than_or_equal_second_empty()
{
    // Setup fixture
    string geranium("geranium");
    string empty("");

    // Test
    bool result_7 = geranium >= empty;

    // Verify
    assert(result_7 == true);
}

void test_greater_than_or_equal_both_empty()
{
    // Setup fixture
    string empty_1;
    string empty_2("");

    // Test
    bool result_8 = empty_1 >= empty_2;

    // Verify
    assert(result_8 == true);
}

void test_greater_than_or_equal_substring_first_longer()
{
    // Setup fixture
    string lily("lily");
    string lil("lil");

    // Test
    bool result_9 = lily >= lil;

    // Verify
    assert(result_9 == true);
}

void test_greater_than_or_equal_substring_first_shorter()
{
    // Setup fixture
    string pans("pans");
    string pansy("pansy");

    // Test
    bool result_A = pans >= pansy;

    // Verify
    assert(result_A == false);
}

