/* Date : 13/04/2023

Printing the patterns:
pattern - 17

    * * * *
    * * *
    * *
    *

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

        // print star
        int star = n+1-row;

        while(star){
            cout<<"*";
            star--;
        }
        cout<<endl;
        row++;

    }
    return 0;
}