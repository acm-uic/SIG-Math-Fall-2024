/*
  Values are expressions that just evaluate to true or false
  Meant to be the very bottom of the totem pole
*/

#pragma once
#include "Expression.h"

class Value: Expression
{
  private:
    bool value;

  public:
    // Constructors
    Value();

    // Setters
    void setValue(bool);

    // We'll also override evaluate, so we can return value
    bool evaluate() override;
   
};
