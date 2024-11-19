#pragma once

class Expression
{
  private:
    Expression* leftSide;
    Expression* rightSide;
    char operatorCharacter;

  public:
    virtual bool evaluate();
    void setLeftExpression(Expression*);
    void setRightExpression(Expression*);

    void setOperatorCharacter(char);

    Expression();
    Expression(Expression*, Expression*, char);

};
