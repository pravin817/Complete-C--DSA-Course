#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    // Array delaration

    int number[15];

    cout << "Printing the value at the index 2: " << number[10] << endl;
    cout << "Everything is fine" << endl;

    // Initializing the array
    int second[3] = {5, 7, 11};
    cout << "The element at the index 2 is : " << second[2] << endl;

    int third[15] = {2, 3};

    int sizeOfThird = sizeof(third) / sizeof(int);
    cout << "The size of the Third array is : " << sizeOfThird << endl;
    cout << "The printing the values from the third array : " << endl;

    // Printing the elements of the array
    for (int i = 0; i < 15; i++)
    {
        cout << third[i] << " ";
    }
    cout << endl;

    int fourth[15] = {0}; // This will initilaise the

    printArray(fourth, 14);

    // Find the size of the fourth

    int sizeOfFourth = sizeof(fourth) / sizeof(int);
    cout << "The size of the fouth array is : " << sizeOfFourth << endl;

    cout << "Everything is fine." << endl;
    return 0;
}