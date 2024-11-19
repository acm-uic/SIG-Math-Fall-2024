#include <string>
#include <vector>
#include "Expression.h"
#include "InputParser.h"

Expression InputParser::parseToExpression(std::string input)
{

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
