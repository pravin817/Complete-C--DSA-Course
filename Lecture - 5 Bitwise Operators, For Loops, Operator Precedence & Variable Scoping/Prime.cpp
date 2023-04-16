// Date : 14/04/2023

// Problem Statement : Write a C++ Program to check the entered number is prime or not.

#include<iostream>
#include<math.h>
using namespace std;

int main(){

    int n;
    cout<<"Enter the number : ";
    cin>>n;

    bool isPrime = true;

    for(int i = 2; i<=sqrt(n);i++){
        if(n%i==0){
            // cout<<"Not a prime";
            isPrime = false;
            break;
        }
    }

    if(isPrime==true){
        cout<<"Prime Number."<<endl;
    }else{
        cout<<"Not a prime number."<<endl;
    }

    return 0;
}