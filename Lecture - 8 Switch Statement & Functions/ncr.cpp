// Date : 14/04/2023

// Problem Statement : Write a C++ Program for the nCr.

#include<iostream>
using namespace std;

int factorial(int num){
    int ans = 1;
    for(int i = 1;i<=num;i++){
        ans = ans * i;
    }
    return ans;
}

int nCr(int n,int r){
    int num = factorial(n);
    int dem = (factorial(n-r)*factorial(r));
    return num/dem;
}

int main(){
    int n,r;
    cout<<"Enter the value of the n,r : ";
    cin>>n>>r;

    cout<<"The answer is : "<<nCr(n,r)<<endl;

    return 0;
}
