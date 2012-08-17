//===========================================================================
/***  string - Test: find()
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

void test_find_present_start();
void test_find_present_middle();
void test_find_present_end();
void test_find_not_present_start();
void test_find_not_present_middle();
void test_find_not_present_end();

int main()
{
    test_find_present_start();
    test_find_present_middle();
    test_find_present_end();
    test_find_not_present_start();
    test_find_not_present_middle();
    test_find_not_present_end();
}

void test_find_present_start()
{
    // Setup fixture
    string ABCxxxx("ABCxxxx");
    string ABC("ABC");

    // Test
    int ABC_idx = ABCxxxx.find(ABC);

    // Verify
    assert(ABC_idx        == 0 );
    assert(ABCxxxx        == "ABCxxxx" );
    assert(ABC            == "ABC" );
    assert(ABCxxxx.size() == 7 );
    assert(ABC.size()     == 3 );
}

void test_find_present_middle()
{
    // Setup fixture
    string wwwRSTww("wwwRSTww");
    string RST("RST");

    // Test
    int RST_idx = wwwRSTww.find(RST);

    // Verify
    assert(RST_idx         == 3 );
    assert(wwwRSTww        == "wwwRSTww" );
    assert(RST             == "RST" );
    assert(wwwRSTww.size() == 8 );
    assert(RST.size()      == 3 );
}

void test_find_present_end()
{
    // Setup fixture
    string aaaaaXYZ("aaaaaXYZ");
    string XYZ("XYZ");

    // Test
    int XYZ_idx = aaaaaXYZ.find(XYZ);

    // Verify
    assert(XYZ_idx         == 5 );
    assert(aaaaaXYZ        == "aaaaaXYZ" );
    assert(XYZ             == "XYZ" );
    assert(aaaaaXYZ.size() == 8 );
    assert(XYZ.size()      == 3 );
}

void test_find_not_present_start()
{
    // Setup fixture
    string ABCxxxx("ABCxxxx");
    string ABg("ABg");

    // Test
    int ABg_idx = ABCxxxx.find(ABg);

    // Verify
    assert(ABg_idx        == -1 );
    assert(ABCxxxx        == "ABCxxxx" );
    assert(ABg            == "ABg" );
    assert(ABCxxxx.size() == 7 );
    assert(ABg.size()     == 3 );
}

void test_find_not_present_middle()
{
    // Setup fixture
    string wwwRSTww("wwwRSTww");
    string RSe("RSe");

    // Test
    int RSe_idx = wwwRSTww.find(RSe);

    // Verify
    assert(RSe_idx         == -1 );
    assert(wwwRSTww        == "wwwRSTww" );
    assert(RSe             == "RSe" );
    assert(wwwRSTww.size() == 8 );
    assert(RSe.size()      == 3 );
}

void test_find_not_present_end()
{
    // Setup fixture
    string aaaaaXYZ("aaaaaXYZ");
    string XYZZ("XYZZ");

    // Test
    int XYZZ_idx = aaaaaXYZ.find(XYZZ);

    // Verify
    assert(XYZZ_idx        == -1 );
    assert(aaaaaXYZ        == "aaaaaXYZ" );
    assert(XYZZ            == "XYZZ" );
    assert(aaaaaXYZ.size() == 8 );
    assert(XYZZ.size()     == 4 );
}

