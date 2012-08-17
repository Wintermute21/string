/**  string - Test: output, <<
 */

#ifdef STD_STRING
  #include <string>
  using std::string;
#else
  #include "string.h"
  using cs33001::string;
#endif

#include <iostream>
#include <sstream>
#include <cassert>
using std::cin;
using std::cout;
using std::cerr;

void test_input();

int main()
{
    test_input();
}

void test_input()
{
    // Setup fixture
    string input("watermelon");
    std::istringstream in_stream(input.c_str());

    // Test
    string watermelon;
    in_stream >> watermelon;

    // Verify
    assert(watermelon        == input);
    assert(watermelon.size() == 10);
}

