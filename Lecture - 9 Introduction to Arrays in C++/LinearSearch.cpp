// Implemnenatation of the linear search

#include <iostream>
using namespace std;

bool linearSearch(int arr[], int n, int target)
{

    // Check the element is present or not
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == target)
        return 1;
    }
    return 0;
}

int main()
{
    int arr[10] = {2, 3, 5, 7, 1, -96, 25, 96, 36, 97};
    int target;
    cout<<"Enter the target element : ";
    cin>>target;

    if (linearSearch(arr, 10, target))
    {
        cout << "The target element is present." << endl;
    }
    else
    {
        cout << "The target elements is NOT present." << endl;
    }

    return 0;
}