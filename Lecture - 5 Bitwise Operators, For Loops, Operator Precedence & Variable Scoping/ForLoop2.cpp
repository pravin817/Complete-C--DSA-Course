// Date : 13/04/2023

// Problem Statement : Write a C++ program for the finding the sum of the all the numbers from 1 to n

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number : ";
    cin>>n;

    int sum = 0;
    cout<<"The sum of the numbers from 1 to "<<n<<": ";
    for(int i = 1; i<=n;i++){
        sum+=i;
    }
    cout<<sum<<endl;

    return 0;
}