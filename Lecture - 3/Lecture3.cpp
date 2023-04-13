/*
    Lecture - 3
    Problem Statement : Write a c++ program to check the greater number between two numbers.
    Anthor : Pravin Mhaske
    Date : 02/04/2023
*/

// #include<iostream>
// using namespace std;

// int main(){
//     int a,b;
//     cout<<"Enter the first number : ";
//     cin>>a;
//     cout<<"Enter the second number : ";
//     cin>>b;
    
    
//     if(a>b){
//         cout<<a<<" is greater"<<endl;
//     }else{
//         cout<<b<<" is greater."<<endl;
//     }
//     return 0;
// }

// Problem No - 2 : Check the number is positive,negative or zero


// #include<iostream>
// using namespace std;

// int main()
// {
//     int num;
//     cout<<"Enter the number : ";
//     cin>>num;
    
//     if(num == 0){
//         cout<<"Entered number is zero."<<endl;
//     }else if(num>0){
//         cout<<"Entered number is positive"<<endl;
//     }else{
//         cout<<"Entered number is negative"<<endl;
//     }
//     return 0;
// }


// #include<iostream>
// using namespace std;

// // Problem 1 
// int main(){
//     char ch;
//     cout<<"Enter the character : ";
//     cin>>ch;
    
//     if(ch >='a' && ch <='z'){
//         cout<<"Small case letter."<<endl;
//     }else if(ch >='A' && ch <='Z'){
//         cout<<"Capital case letter."<<endl;
//     }else if(ch>='0' && ch<='9'){
//         cout<<"Numeric value"<<endl;
//     }else{
//         cout<<"None of the above"<<endl;
//     }
//     return 0;
// }

// Print numbers from 1 to 10

// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"Enter the number : ";
//     cin>>n;
    
//     int i = 1;
//     while(i<=n){
//         cout<<i<<" ";
//         i++;
//     }
//     return 0;
// }


// Sum of 1 to n

// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"Enter the number : ";
//     cin>>n;
    
//     int i = 0, sum = 0;
    
//     while(i<=n){
//         sum +=i;
//         i++;
//     }
    
//     cout<<"The sum of the numbers from 1 to "<<n<<" is : "<<sum<<endl;
//     return 0;
// }


// Sum of all evene numbers from 1 to n

// #include<iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cout<<"Enter the value the n : ";
//     cin>>n;
    
//     int i = 0, eSum = 0;
    
//     while(i<=n){
//         if(i%2==0){
//             eSum +=i;
//         }
//         i++;
//     }
    
//     cout<<"The sum of numbers from 1 to "<<n<<"(only even numbers is) :"<<eSum<<endl;
//     return 0;
// }


// Patterns - 1
// print the following pattern for n = 4
// * * * *
// * * * *
// * * * *
// * * * *

// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"Enter the value of the n : "<<endl;
//     cin>>n;
    
//     int i = 0;
//     while(i<n){
//         int j = 0;
//         while(j<n){
//             cout<<"* ";
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
//     return 0;
// }



// Patterns - 2
// print the following pattern for n = 3
// 1 1 1
// 2 2 2
// 3 3 3    

// #include<iostream>
// using namespace std;

// int main(){
//     int num;
//     cout<<"Enter the value of the num :"<<endl;
//     cin>>num;
    
//     int i = 1;
//     // rows
//     while(i<=num){
//         //columns
        
//         int j = 1;
//         while(j<=num){
//             cout<<i<<" ";
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
//     return 0;
// }
