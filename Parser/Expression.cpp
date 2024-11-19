#include "Expression.h"

Expression::Expression()
{
  leftSide = nullptr;
  rightSide = nullptr;
  operatorCharacter = ' ';
}

Expression::Expression(Expression* leftSide, Expression* rightSide, char operatorCharacter)
{ 
  this->leftSide = leftSide;
  this->rightSide = rightSide;
  this->operatorCharacter = operatorCharacter;
}

void Expression::setLeftExpression(Expression* left)
{
  this->leftSide = left;
}

void Expression::setRightExpression(Expression* right)
{
  this->rightSide = right;
}

void Expression::setOperatorCharacter(char operatorChar)
{
  this->operatorCharacter = operatorChar;
}

bool Expression::evaluate()
{
  // Have these flags set to false as a backup for nullptr
  bool leftValue = false;
  bool rightValue = false;

  // If expressions were null, then just leave the default as false
  if (leftSide != nullptr)
  {
    // Otherwise expressions exist, so evaluate them
    leftValue = leftSide->evaluate();
  }

  if (rightSide != nullptr)
  {
    rightValue = rightSide->evaluate();
  }

  // TODO: IMPLEMENT
  return false;
}

