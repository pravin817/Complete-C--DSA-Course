// Date : 14/04/2023

// Problem Statement : Write a C++ Program for printing the count.

#include<iostream>
using namespace std;

void printCounting(int num){
    for(int i=1;i<=num;i++){
        cout<<i<<" ";
    }
}

int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;

    printCounting(n);

    return 0;
}