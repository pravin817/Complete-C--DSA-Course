/* Date : 13/04/2023

Printing the patterns:
pattern - 15

    D
    C D
    B C D
    A B C D

    for n = 4
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
            char ch = 'A'+n-row+col-1;
            cout<<ch<<" ";
            col++;
        }
        cout<<endl;
        row++;
    }
    return 0;
}