/* Date : 13/04/2023

Printing the patterns:
pattern - 8

    1
    2 1
    3 2 1
    4 3 2 1

    for n = 4
*/

// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"Enter the value of the n: ";
//     cin>>n;

//     int row = 1;
//     while(row <= n){
//         int col = 1;
//         int count = row;
//         while(col<=row){
//             cout<<count<<" ";
//             count--;
//             col++;
//         }
//         cout<<endl;
//         row++;
//     }
//     return 0;
// }

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the value of the n: ";
    cin>>n;

    int row = 1;
    while(row <= n){
        int col = 1;
        while(col<=row){
            cout<<(row-col+1)<<" ";
            col++;
        }
        cout<<endl;
        row++;
    }
    return 0;
}