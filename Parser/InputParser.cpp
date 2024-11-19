#include <string>
#include <vector>
#include "Expression.h"
#include "InputParser.h"

vector<string> InputParser::splitInput(string input)
{
  vector<string> inputStrings;

  

  return inputStrings;
}

string InputParser::findMatchingParenthesis(string input)
{
  // Create a holder for the amount of left and right parenthesis
  int rightParenthesis = 0;
  int leftParenthesis = 0;

  // Create a holder for the first leftParenthesis
  int leftParenthesisStart = -1;

  // Loop over every character in string
  for (size_t inputIndex = 0; inputIndex < input.size(); inputIndex++)
  {
    // If the input is a left parenthesis
    if (input.at(inputIndex) == '(')
    {
      // Increase our counter
      leftParenthesis++;

      // Now check if this was the first leftParenthesis
      if (leftParenthesis == 1)
      {
        // If it is our first, set our start value to our index
        leftParenthesisStart = inputIndex;
      }

    // Now check for right parenthesis
    } else if (input.at(inputIndex) == ')')
    {
      // Right parenthesis found
      rightParenthesis++;
    }

    // Now if we have more than one left parenthesis and the same amount as the right
    if (leftParenthesis > 0 && leftParenthesis == rightParenthesis)
    {
      // Return the substring of just the parenthesis
      return input.substr(leftParenthesisStart, inputIndex - leftParenthesisStart + 1);
    }
  }

  return "";
}

InputParser::InputParser()
{
  this->input = "";
  position = 0;
}

InputParser::InputParser(string input)
{
  this->input = input;
  position = 0;
}

bool InputParser::isOperator(char possibleOperator)
{
    return (possibleOperator == '&' || possibleOperator == '^' || possibleOperator == '|' 
            || possibleOperator == 'v' || possibleOperator == '!' || possibleOperator == 'x'
            || possibleOperator == '>' || possibleOperator == '<' || possibleOperator == '=');
}
