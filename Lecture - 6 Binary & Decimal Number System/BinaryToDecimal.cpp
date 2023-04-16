// Date : 14/04/2023

// Problem Statement : Write a C++ Program for the conversion of the Binary to decimal.

#include<iostream>
#include<math.h>
using namespace std;

int main(){

    int n;
    cout<<"Enter the number in the binary form : ";
    cin>>n;

    int ans = 0,i=0;

    while(n!=0){
        int lastDigit = n % 10;

        if(lastDigit == 1){
            ans = ans + pow(2,i);
        }
        i++;
        n = n / 10;
    }
    cout<<"Decimal : "<<ans<<endl;
    return 0;
}