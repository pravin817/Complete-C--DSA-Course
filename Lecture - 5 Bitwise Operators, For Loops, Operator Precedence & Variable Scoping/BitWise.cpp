// Date : 13/04/2023

// Problem Statement : Write a C++ Program for the implementation of the Bitwise operators

#include<iostream>
using namespace std;

int main(){

    int a = 4;
    int b = 6;

    cout<< "a & b : "<<(a&b)<<endl;
    cout<< "a | b : "<<(a|b)<<endl;
    cout<< "~a : "<<(~a)<<endl;
    cout<< "a ^ b : "<<(a^b)<<endl;

    cout<<(17 >>1) <<endl;
    cout<<(17>>2)<<endl;
    cout<<(19<<1)<<endl;
    cout<<(21<<2)<<endl;


    // Pre and Post increament and Decreament

    int i = 7;
    cout<<(i++)<<endl;
    cout<<(++i)<<endl;
    cout<<(i--)<<endl;
    cout<<(--i)<<endl;

    return 0;
}