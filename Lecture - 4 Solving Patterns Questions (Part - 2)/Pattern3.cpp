/* Printing the patterns:
pattern - 3

    1 2 3
    4 5 6
    7 8 9

    for n = 3
*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the value of the n : ";
    cin>>n;
    // Using the while loop
    // int i = 1;
    // int count = 1;
    // while(i<=n){
    //     int j = 1;
    //     while(j<=n){
    //         cout<<count<<" ";
    //         j++;
    //         count++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    // using the for loop
    int i,j,count=1;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            cout<<count<<" ";
            count++;
        }
        cout<<endl;
    }
    return 0;
}
