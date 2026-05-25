#include<iostream>
using namespace std;
int main(){
    int num,rem;
    int digits=0;
    int pow=1;

    cout<<"Enter the number: ";
    cin>>num;

    while(num>0){
        rem=num%2;
        num=num/2;
        digits+=(rem*pow);
        pow=pow*10;
    }
    cout<<"Binary number of "<<num<<" is "<<digits;
    return 0;
}