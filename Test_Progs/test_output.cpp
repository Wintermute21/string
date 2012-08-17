/**  string - Test: output, <<
 *
 *   Needed: Output on string like "abc def"
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
using std::istringstream;

void test_output();

int main()
{
    test_output();
}

void test_output()
{
    // Setup fixture
    string apple("apple");
    std::ostringstream out_str_stream;

    // Test
    out_str_stream << apple;

    // Verify
    // Get the string that is the output stream of characters.
    string tmp = out_str_stream.str().c_str();
    const char* ptr = tmp.c_str();
    string apple_result(ptr);

    assert(apple        == "apple");
    assert(apple_result == "apple");

    assert(apple.size()        == 5);
    assert(apple_result.size() == 5);
}

