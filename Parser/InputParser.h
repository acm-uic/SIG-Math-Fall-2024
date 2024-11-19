#pragma once

#include "Expression.h"
#include <string>
#include <vector>

using namespace std;

class InputParser
{
  private:
    // Input represents the internally stored data
    string input;
    // Position represents the current index in the input string
    int position;


  public:
    InputParser();
    
    InputParser(string input);

    vector<string> splitInput(string);

    bool isOperator(char);
   
    // Takes in an input starting in parenthsis, and returns string of everything
    // between start and end parenthesis
    string findMatchingParenthesis(string);
};
