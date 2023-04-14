// Home work 1

#include <iostream>
using namespace std;

int main()
{
    int amount;
    cout << "Enter the amount : ";
    cin >> amount;

    int RS100, RS50, RS20, RS1;

    switch (1)
    {
    case 1:
        RS100 = amount / 100;
        amount = amount % 100;
        cout << "No of 100 Rupees : " << RS100 << endl;
        // break;

    case 2:
        RS50 = amount / 50;
        amount = amount % 50;
        cout << "No of 50 Rupees : " << RS50 << endl;
        // break;

    case 3:
        RS20 = amount / 20;
        amount = amount % 20;
        cout << "No of 20 Rupees : " << RS20 << endl;
        // break;
    case 4:
        RS1 = amount / 1;
        amount = amount % 1;
        cout << "No of 1 Rupees : " << RS1 << endl;
        // break;
    default:
        break;
    }

    return 0;
}