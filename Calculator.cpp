#include "Calculator.h"

double Calculator::calculate(double input1, char oper, double input2)
{
    switch (oper)
    {
        case '+':
            return input1 + input2;
        case '-':
            return input1 - input2;
        case '*':
            return input1 * input2;
        case '/':
            return input1 / input2;
        default:
            return 0.0;
    }
}
