//  string - test assignment
//

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

void test_assign_same_size();
void test_assign_first_longer();
void test_assign_second_longer();
void test_assign_both_empty();
void test_assign_change_original();
void test_assign_3();
void test_assign_return_ref();

int main()
{
     test_assign_same_size();
     test_assign_first_longer();
     test_assign_second_longer();
     test_assign_both_empty();
     test_assign_change_original();
     test_assign_3();
     test_assign_return_ref();
}

void test_assign_same_size()
{
    // Setup fixture
    string foo("foo");
    string bar("bar");

    // Test
    foo = bar;

    assert(foo == bar);
    assert(foo.size() == bar.size());
}

void test_assign_first_longer()
{
    // Setup fixture
    string foofoo("foofoo");
    string bar("bar");

    // Test
    foofoo = bar;

    // Verify
    assert(foofoo == bar);
    assert(foofoo.size() == bar.size());
}

void test_assign_second_longer()
{
    // Setup fixture
    string foo("foo");
    string barbar("barbar");

    // Test
    foo = barbar;

    // Verify
    assert(foo == barbar);
    assert(foo.size() == barbar.size());
}

void test_assign_both_empty()
{
    // Setup fixture
    string empty_1("");
    string empty_2;

    // Test
    empty_2 = empty_1;

    // Verify
    assert(empty_1 == empty_2);
    assert(empty_1.size() == empty_2.size());
}

void test_assign_change_original()
{
    // Setup fixture
    string str_1("O");
    string str_2;

    // Test
    str_2 = str_1;
    str_1[0] = 'X';

    // Verify
    assert(str_2.size() == str_1.size());
    assert(str_1 == "X");
    assert(str_2 == "O");
}

void test_assign_3()
{
    // Setup fixture
    string str_1("O");
    string str_2;
    string str_3;

    // Test
    str_3 = str_2 = str_1;
    str_1[0] = 'X';
    str_2[0] = 'Y';

    // Verify
    assert(str_1.size() == str_2.size());
    assert(str_1.size() == str_3.size());
    assert(str_1 == "X");
    assert(str_2 == "Y");
    assert(str_3 == "O");
}

void test_assign_return_ref()
{
    // Setup fixture
    string str_1("O");
    string str_2;

    // Test
    (str_2 = str_1)[0] = 'X';

    // Verify
    assert(str_1.size() == str_2.size());
    assert(str_1 == "O");
    assert(str_2 == "X");
}

