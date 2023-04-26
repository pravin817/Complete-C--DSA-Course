// Print the sum of the array elements

#include <iostream>
using namespace std;

void inputArray(int arr[], int size)
{

    cout << "Enter the elements of an array : ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
}

void printArray(int arr[], int size)
{
    cout << "Printing the array elements : ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int sumOfArray(int arr[], int size)
{
    int sum = 0;

    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }

    return sum;
}

int main()
{
    int size;
    cout << "Enter the size of an array : ";
    cin >> size;

    int arr[100];
    inputArray(arr, size);
    printArray(arr, size);

    cout << "The sum of the all the elements of an array is : " << sumOfArray(arr, size) << endl;

    return 0;
}
