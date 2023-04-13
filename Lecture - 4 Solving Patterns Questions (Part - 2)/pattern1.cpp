/* Printing the patterns:
pattern - 1

    1 2 3 4
    1 2 3 4
    1 2 3 4
    1 2 3 4

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
            cout<<j<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }

    // using the for loop
    // for(int i = 1;i<=n;i++){
    //     for(int j = 1;j<=n;j++){
    //         cout<<j<<" ";
    //     }
    //     cout<<endl;
    // }
    return 0;
}
