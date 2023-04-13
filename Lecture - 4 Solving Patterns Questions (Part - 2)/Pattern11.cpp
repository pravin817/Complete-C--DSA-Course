/* Date : 13/04/2023

Printing the patterns:
pattern - 11

    A B C
    D E F
    G H I

    for n = 3
*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the value of the n : ";
    cin>>n;

    int row = 1;
    char ch = 'A';
    while(row<=n){
        int col = 1;
        while(col<=n){
            cout<<ch<<" ";
            ch++;
            col++;
        }
        cout<<endl;
        row++;
    }
    return 0;
}