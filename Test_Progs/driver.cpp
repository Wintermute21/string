/**  string - Driver
 */

#ifdef STD_STRING
  #include <string>
  using std::string;
#else
  #include "string.h"
  using cs33001::string;
#endif

#include <iostream>
using std::cin;
using std::cout;
using std::cerr;

int main(int argc, char* argv[])
{
    // Command line arguments required
    if (argc != 3)
    {
        cerr << "Usage: " << argv[0] << " string string\n";
        exit(1);
    }
 
    // Create strings, C-string constructor, string for result 
    string str1(argv[1]);
    string str2(argv[2]);
    string result;

    // Output strings
    cout << "string 1 = \"" << str1   << "\"\n";
    cout << "string 2 = \"" << str2   << "\"\n";
    cout << "result   = \"" << result << "\"\n\n";

    // Test operation
    // EXAMPLE: result = str1 + str2;

    // Output strings
    cout << "string 1 = \"" << str1   << "\"\n";
    cout << "string 2 = \"" << str2   << "\"\n";
    cout << "result   = \"" << result << "\"\n";
}

