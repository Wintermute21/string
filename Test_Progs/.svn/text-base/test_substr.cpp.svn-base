/**  string - Test: substr()
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

void test_substr_get_from_first();
void test_substr_get_from_middle();
void test_substr_get_from_last();

int main()
{
    test_substr_get_from_first();
    test_substr_get_from_middle();
    test_substr_get_from_last();
}

void test_substr_get_from_first()
{
    // Setup fixture
    string ABCxxxx("ABCxxxx");

    // Test
    string ABC = ABCxxxx.substr(0, 3);

    // Verify
    assert(ABCxxxx        == "ABCxxxx" );
    assert(ABC            == "ABC" );

    assert(ABCxxxx.size() == 7 );
    assert(ABC.size()     == 3 );
}

void test_substr_get_from_middle()
{
    // Setup fixture
    string wwwwRSTUww("wwwwRSTUww");

    // Test
    string RSTU = wwwwRSTUww.substr(4, 4);

    // Verify
    assert(wwwwRSTUww        == "wwwwRSTUww" );
    assert(RSTU              == "RSTU" );

    assert(wwwwRSTUww.size() == 10 );
    assert(RSTU.size()       == 4 );
}

void test_substr_get_from_last()
{
    // Setup fixture
    string aaaaaVWXYZ("aaaaaVWXYZ");

    // Test
    string VWXYZ = aaaaaVWXYZ.substr(5, 5);

    // Verify
    assert(aaaaaVWXYZ        == "aaaaaVWXYZ" );
    assert(VWXYZ             == "VWXYZ" );

    assert(aaaaaVWXYZ.size() == 10 );
    assert(VWXYZ.size()      == 5 );
}

