// Date : 13/04/2023

// Problem Statement : Implement the for loop

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the value of the n : ";
    cin >> n;

    // for(int i=1;i<=n;i++){
    //     cout<<i<<" ";
    // }

    // int i = 1;
    // for (;;)
    // {
    //     if (i <= n)
    //     {
    //         cout << i << " ";
    //     }else{
    //         break;
    //     }
    //     i++;
    // }

    for(int a = 0, b = 1, c = 2; a>=0 && b>=1 && c>=2;a--,b--,c--){
        cout<<a<<" "<<b<<" "<<c<<endl;
    }
    return 0;
}