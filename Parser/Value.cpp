
#include "Value.h"

Value::Value()
{
  // Default, set value to false
  value = false;
}

void Value::setValue(bool value)
{
  this->value = value;
}

bool Value::evaluate()
{
  return value;
}
