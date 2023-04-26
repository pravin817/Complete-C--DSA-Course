// Program for the finding the minimum and the maximum from the given array

#include <iostream>
#include<limits.h>
using namespace std;

void printArray(int arr[], int size){
    cout<<"Printing the elements of an array : ";
    for(int i = 0; i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void minMaxFromArray(int arr[],int size){
    int min, max;
    min=max=arr[0];

    for(int i=0;i<size;i++){
        if(max<arr[i]){
            max = arr[i];
        }

        if(min>arr[i]){
            min = arr[i];
        }
    }

    cout<<"The maximum and minimum elements from the array are : "<<max<<" and "<<min<<endl;
}

int getMin(int arr[], int size){
    int mini = INT_MAX;

    for(int i =0; i<size;i++){
        mini = min(mini,arr[i]);
    }
    return mini;
}


int getMax(int arr[], int size){
    int maxi = INT_MIN;

    for(int i =0; i<size;i++){
        maxi = max(maxi,arr[i]);
    }
    return maxi;
}


int main()
{

    int size;
    cout<<"Enter the size of the array : ";
    cin>>size;

    int num[100];

    cout<<"Enter the elements in an array : ";
    for(int i =0;i<size;i++){
        cin>>num[i];
    }

    printArray(num,size);
    minMaxFromArray(num,size);

    cout<<endl;
    cout<<"Printing the maximnum element from the array : "<<getMax(num,size)<<endl;
    cout<<"Printing the manimum element from the array : "<<getMin(num,size)<<endl;
    return 0;
}