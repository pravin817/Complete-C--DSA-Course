// Date : 13/04/2023

// Problem Statement : Write a C++ program for the printing the fibonacci numbers.

#include<iostream>
using namespace std;

int main()
{
    int n = 10;
    // cout<<"Enter the number : ";
    // cin>>n;

    int a = 0;
    int b = 1;
    cout<<a<<" "<<b<<" ";

    for(int i = 1;i<=n;i++){
        int nextNo = a+b;
        cout<<nextNo<<" ";
        a = b;
        b = nextNo;
    }

    return 0;
}