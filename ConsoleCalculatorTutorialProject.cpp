// ConsoleCalculatorTutorialProject.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Calculator.h"

using namespace std;

int main()
{
    std::cout << "Hello World!\n";

    double x = 0.0;
    double y = 0.0;
    double result = 0.0;
    char oper = '+';

    cout << "Calculator Console Application\nPlease enter the operation to perform.Format: a + b | a - b | a * b | a / b";

    Calculator c;
    while (true)
    {
        cin >> x >> oper >> y;
        result = c.calculate(x, oper, y);
        cout << "Result " << "of " << x << oper << y << " is: " << result << endl;
        cout << "playing with git and git hub\n";
    }
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
 