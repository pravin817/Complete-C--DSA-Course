/* Date : 13/04/2023

Printing the patterns:
pattern - 16

          *
        * *
      * * *
    * * * *

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

        // Print the space
        int space = n-row;
        while(space){
            cout<<"  ";
            space--;
        }

        // print the star

        while(col<=row){
            cout<<" *";
            col++;
        }
        cout<<endl;
        row++;
    }
    return 0;
}