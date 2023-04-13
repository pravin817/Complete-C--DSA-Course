/* Date : 13/04/2023

Printing the patterns:
pattern - 12

    A B C
    B C D
    C D E

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
            char ch = ('A'+row+col-2);
            cout<<ch<<" ";
            col++;
        }
        cout<<endl;
        row++;
    }
    return 0;
}