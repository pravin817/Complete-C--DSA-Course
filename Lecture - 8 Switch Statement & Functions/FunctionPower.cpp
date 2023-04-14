// Date : 14/04/2023

// Problem Statement : Write a C++ Program for the implementation function.

#include <iostream>
using namespace std;

int power()
{
    int a, b;
    cout << "Enter the two numbers : ";
    cin >> a >> b;
    int ans = 1;
    for (int i = 1; i <= b; i++)
    {
        ans = ans * a;
    }
    return ans;
}

int main()
{

    int answer = power();
    cout << "The power of the two numbers is : " << answer << endl;
    return 0;
}