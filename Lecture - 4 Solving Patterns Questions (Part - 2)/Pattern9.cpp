/* Date : 13/04/2023

Printing the patterns:
pattern - 9

    A A A
    B B B
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
        while(col<=n){
            cout<<char('A'+row-1)<<" ";
            col++;
        }
        cout<<endl;
        row++;
    }
    return 0;
}