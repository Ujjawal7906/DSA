// #include<iostream>
// using namespace std;

// int printhello(){
//     cout<<"Hello World!";
// }

// int main(){
//     printhello();
//     return 0;
// }

// Function to print sum as a parameter

// #include<iostream>
// using namespace std;

// int sum(int a, int b){
//     cout<<"Sum is "<< a+b;
// }

// int main(){
//     int a;
//     int b;
//     cout<<"Enter a: ";
//     cin>>a;

//     cout<<"Enter b: ";
//     cin>>b;
//     sum(a,b);
//     return 0;
// }

// function to calculate maximum of two number

// #include<iostream>
// using namespace std;

// int max(int a, int b){
//     if(a>b){
//         cout<<a<<" is greater than "<<b;
//     }
//     else{
//         cout<<b<<" is greater than "<<a;
//     }
// }

// int main(){
//     int a;
//     int b;
//     cout<<"Enter a: ";
//     cin>>a;

//     cout<<"Enter b: ";
//     cin>>b;
//     max(a,b);
//     return 0;
// }

// Calculate the sum of 1 to N

// #include<iostream>
// using namespace std;

// int sum(int n){
//     int sum =0;
//     for(int i=1;i<=n;i++){
//         sum+=i;
//     }
//     return sum;
// }

// int main(){
//     int a;
//     cout<<"Enter a: ";
//     cin>>a;

//     cout<<"Sum of "<<a<<" number is "<< sum(a);
//     return 0;
// }

// Calculate the factorial of N numbers

// #include<iostream>
// using namespace std;

// int factorial(int n){
//     int fact =1;
//     for(int i=1;i<=n;i++){
//         fact*=i;
//     }
//     return fact;
// }

// int main(){
//     int a;
//     cout<<"Enter a: ";
//     cin>>a;

//     cout<<"Factorial of "<<a<<" number is "<<factorial(a);
//     return 0;
// }

// Sum of digits of a number

#include <iostream>
using namespace std;

int sumofDigits(int n)
{
    int rem;
    int sum=0;
    while(n>0)
    {
        rem = n % 10;
        n = n / 10;
        sum+=rem;
    }
    return sum;
}

int main()
{
    int a;
    cout << "Enter a: ";
    cin >> a;

    cout << "Sum of digits " << a << " number is " << sumofDigits(a);
    return 0;
}