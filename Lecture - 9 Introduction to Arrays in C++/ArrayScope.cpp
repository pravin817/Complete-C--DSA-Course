// Scope of the array elements

#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{
    cout << "Printing the elements of an array : ";

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void updateArray(int arr[], int size)
{
    cout << "Inside the update function : " << endl;

    arr[2] = 15;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Going back to the main function." << endl;
}

int main()
{

    int arr[5] = {1, 2, 3, 4, 5};

    updateArray(arr, 5);
    // printArray(arr,5);

    cout << "Inside the main function : " << endl;

    cout << "Printing the elements inside the array : ";
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}

// NOTE : In case of the array we pass the address of the array (base address)