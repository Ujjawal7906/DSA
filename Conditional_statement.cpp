// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the value of n: ";
//     cin>>n;

//     if(n>=0){
//         cout<<"Number is positive";
//     }
//     else{
//         cout<<"Number is negative";
//     }
//     return 0;
// 

// Check wheather the character is lowercase or in uppercase
#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter your character: ";
    cin>>ch;

    if(ch>='a'&&ch<='z'){
        cout<<"Character in lowercase";
    }
    else{
        cout<<"Character in uppercase";
    }
    return 0;
}