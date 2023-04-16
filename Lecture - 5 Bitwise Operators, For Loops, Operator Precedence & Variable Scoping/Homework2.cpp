// Home Work - 2

#include <iostream>
using namespace std;

// First
// int main()
// {

//     for (int i = 0; i <= 5; i++)
//     {
//         cout << i << " ";
//         i++;
//     }

//     return 0;
// }

// O/P : 0 2 4

// 2nd

// int main()
// {

//     for (int i = 0; i <= 5; i--)
//     {
//         cout << i << " ";
//         i++;
//     }

//     return 0;
// }

// O/P : Infinite 0


// 3rd

// int main()
// {

//     for (int i = 0; i <= 15; i+=2)
//     {
//         cout << i << " ";

//         if(i&1){
//             continue;
//         }
//         i++;
//     }

//     return 0;
// }

// OP : 0 3 5 7 9 11 13 15


// 4th

// int main()
// {

//     for (int i = 0; i < 5; i++)
//     {
//         for(int j = i;j<=5;j++){
//             cout<<i<<" "<<j<<endl;
//         }
//     }

//     return 0;
// }

// OP:
// 0 0
// 0 1
// 0 2
// 0 3
// 0 4
// 0 5
// 1 1
// 1 2
// 1 3
// 1 4
// 1 5
// 2 2
// 2 3
// 2 4
// 2 5
// 3 3
// 3 4
// 3 5
// 4 4
// 4 5


// 5th

int main()
{

    for (int i = 0; i < 5; i++)
    {
        for(int j = i;j<=5;j++){
            if(i+j == 10){
                break;
            }
            cout<<i<<" "<<j<<endl;
        }
    }

    return 0;
}

// OP :
// 0 0
// 0 1
// 0 2
// 0 3
// 0 4
// 0 5
// 1 1
// 1 2
// 1 3
// 1 4
// 1 5
// 2 2
// 2 3
// 2 4
// 2 5
// 3 3
// 3 4
// 3 5
// 4 4
// 4 5