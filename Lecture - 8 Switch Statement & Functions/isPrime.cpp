// Date : 14/04/2023

// Problem Statement : Write a C++ Program for the checking the number is prime or not.

#include <iostream>
#include <math.h>
using namespace std;

bool isPrime(int n)
{

    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{

    int num;
    cout << "Enter the number : ";
    cin >> num;

    if(isPrime(num)){
        cout<<"Prime Number."<<endl;
    }else{
        cout<<"Not a prime number."<<endl;
    }

    return 0;
}