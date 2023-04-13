/* Printing the patterns:
pattern - 2

    4 3 2 1
    4 3 2 1
    4 3 2 1
    4 3 2 1

    for n = 4
*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the value of the n : \n";
    cin>>n;
    // Using the while loop
    int i = 1;
    while(i<=n){
        int j = 1;
        while(j<=n){
            cout<<(n-j+1)<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }

    // using the for loop
    // int i,j;
    // for(i = 1;i<=n;i++){
    //     for(j = 1;j<=n;j++){
    //         cout<<(n-j+1)<<" ";
    //     }
    //     cout<<endl;
    // }
    return 0;
}
