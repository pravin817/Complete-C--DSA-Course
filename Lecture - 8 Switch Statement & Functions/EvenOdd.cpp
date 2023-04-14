// Date : 14/04/2023

// Problem Statement : Write a C++ Program to check the entered number is even or odd.

#include <iostream>
using namespace std;

bool isEven(int num)
{
    if (num &1)
        return 0;
    else
        return 1;
}

int main()
{
    int num;
    cout << "Enter the number : ";
    cin >> num;

    if (isEven(num))
    {
        cout << "Even number" << endl;
    }
    else
    {
        cout << "Odd number" << endl;
    }
    return 0;
}
