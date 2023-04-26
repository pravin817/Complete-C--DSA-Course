// Write a C++ program for the reversing the array 

#include<iostream>
using namespace std;


void printArray(int arr[], int n){
    cout<<"Printing the array elements: ";
    for(int i = 0; i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void reverseArray(int arr[], int n){
    int start = 0;
    int end = n-1;

    while(start<=end){
        swap(arr[start++],arr[end--]);
    }
}

int main(){

    int size;
    cout<<"Enter the size of an array : ";
    cin>>size;

    //declare an array

    int arr[1000];

    cout<<"Enter the elements of an array : ";
    for(int i =0; i<size;i++){
        cin>>arr[i];
    }

    printArray(arr,size);
    reverseArray(arr,size);
    printArray(arr,size);


    return 0;
}