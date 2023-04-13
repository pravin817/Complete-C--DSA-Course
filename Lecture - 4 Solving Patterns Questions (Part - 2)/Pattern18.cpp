/* Date : 13/04/2023

// ISSSUES  
Printing the patterns:
pattern - 18

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
    while(row <=n){
        // print star 

        int star = n - row + 1;

        while(star){
            cout<<"*";
            star--;
        }

        // print space 

        int space = row-1;
        while(space){
            cout<<" ";
            space--;
        }
    }
    cout<<endl;
    row++;
    return 0;
}