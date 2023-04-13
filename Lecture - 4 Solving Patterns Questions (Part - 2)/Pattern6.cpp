/* Printing the patterns:
pattern - 6

    1
    2 3
    4 5 6
    7 8 9 10

    for n = 4
*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the value of the n : ";
    cin>>n;

    int row = 1,count = 1;
    while(row<=n){
        int col = 1;
        while(col <= row){
            cout<<count<<" ";
            count++;
            col++;
        }
        cout<<endl;
        row++;
    }
    return 0;
}
