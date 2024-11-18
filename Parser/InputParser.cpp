#include <string>

void getVariables(std::string input)
{

}

bool isOperator(char possibleOperator)
{
    return (possibleOperator == '&' || possibleOperator == '^' || possibleOperator == '|' 
            || possibleOperator == 'v' || possibleOperator == '!' || possibleOperator == 'x'
            || possibleOperator == '>' || possibleOperator == '<' || possibleOperator == '=');
}