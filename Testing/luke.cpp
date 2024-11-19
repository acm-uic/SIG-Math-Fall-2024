#include <iostream>
#include <string>

// BAD PRACTICE, JUST FOR TESTING
#include "../Parser/InputParser.h"

using namespace std;

int main()
{
    std::cout << "Hello, world!\n";

    string test;

    cout << "Input a string: ";
    cin >> test;

    cout << endl;

    cout << "Your string with parenthesis: ";

    InputParser myParse = InputParser();

    cout << myParse.findMatchingParenthesis(test, true) << endl;
    
    
    return 0;
}
