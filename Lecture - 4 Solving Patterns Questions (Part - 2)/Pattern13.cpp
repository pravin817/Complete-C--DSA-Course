/* Date : 13/04/2023

Printing the patterns:
pattern - 13

    A
    B B
    C C C

    for n = 3
*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the value of the n : ";
    cin>>n;

    int row = 1;
    while(row<=n){
        int col = 1;
        while(col<=row){
            char ch = 'A'+row-1;
            cout<<ch<<" ";
            col++;
        }
        cout<<endl;
        row++;
    }
    return 0;
}