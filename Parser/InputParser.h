#pragma once

#include "Expression.h"
#include <string>
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

    Expression parseToExpression();

    bool isOperator(char);
  
};
