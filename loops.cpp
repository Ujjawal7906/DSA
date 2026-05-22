// #include<iostream>
// using namespace std;
// int main(){
//     int n=5;
//     int count=1;
//     while(count<=n){
//         cout<< count;
//         count++;
//     }
//     cout<<"\n";

//     for(int i=1;i<=5;i++){
//         cout<<i;
//     }
//     return 0;
// }


//sum of n numbers
// #include<iostream>
// using namespace std;
// int main(){
//     int i,sum=0,n;
//     cout<<"enter value of n: ";
//     cin>>n;

//     for(i=1;i<=n;i++){
//         sum+=i;
//     }
//     cout<<"sum of n number is: "<<sum;
//     return 0;
// }

//Sum of odd number
#include<iostream>
using namespace std;
int main(){
    int i,sum=0,n;
    cout<<"enter value of n: ";
    cin>>n;

    for(i=1;i<=n;i++){
        if(i%2!=0)
            sum+=i;
    }
    cout<<"sum of odd number is: "<<sum;
    return 0;
}