// Date : 14/04/2023

// Problem Statement : Home work 2

// Problem : 1: AP : 3n+7

// #include<iostream>
// using namespace std;

// int arithematicprogression(int num){
//     int ans = 3*num+7;
//     return ans;
// }

// int main(){
//     int n;
//     cout<<"Enter the value of the n : ";
//     cin>>n;

//     cout<<arithematicprogression(n)<<endl;

//     return 0;
// }


// OP:
// Enter the value of the n : 9
// 34


// Problem : 2 : Given two numbers print the total number of the set bits

// #include <iostream>
// using namespace std;

// int setBit(int n)
// {
//     int count = 0;

//     while (n != 0)
//     {

//         int bit = n & 1;

//         if (bit == 1)
//         {
//             count++;
//         }
//         n = n >> 1;
//     }
//     return count;
// }

// int main()
// {
//     int a, b;
//     cout << "Enter the two numbers : ";
//     cin >> a >> b;

//     int total = setBit(a) + setBit(b);
//     cout << "The total number of the set bit in " << a << " and " << b << " is : " << total << endl;
//     return 0;
// }


// OP : 
// Enter the two numbers : 7 7
// The total number of the set bit in 7 and 7 is : 6


// Problem : 3 : Write a c++ Program for the returnig the nth fibonacci number 

#include<iostream>
using namespace std;

int nthFibonacci(int num){
    int a = 0;
    int b = 1;
    int c = 0;
    for(int i = 2;i<num;i++){
        c = a+b;
        a = b;
        b = c;
    }

    return c;
}


int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;

    cout<<nthFibonacci(n)<<endl;
    return 0;

}