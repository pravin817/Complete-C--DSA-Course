// Date : 14/04/2023

// Problem Statement : Write a C++ Program for the implementation of the calaculator.

#include <iostream>
using namespace std;

int main()
{

    int a, b;
    cout << "Enter the two numbers : ";
    cin >> a >> b;

    char ch;
    cout << "Enter the operation :(+,-,*,/,%) :";
    cin >> ch;

    switch (ch)
    {
    case '+':
        cout << "The addition is : " << a + b << endl;
        break;

    case '-':
        cout << "The substraction is : " << a - b << endl;
        break;

    case '*':
        cout << "The multiplication is : " << a * b << endl;
        break;

    case '/':
        cout << "The division is : " << a / b << endl;
        break;

    case '%':
        cout << "The remainder is : " << a % b << endl;
        break;

    default:
        cout << "please select the correct option." << endl;
    }

    return 0;
}