
#include<iostream>
using namespace std;

int arithematicprogression(int num){
    int ans = 3*num+7;
    return ans;
}

int main(){
    int n;
    cout<<"Enter the value of the n : ";
    cin>>n;

    cout<<arithematicprogression(n)<<endl;

    return 0;
}