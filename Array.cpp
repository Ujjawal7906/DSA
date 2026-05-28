// #include<iostream>
// using namespace std;
// int main(){
//     int arr[5]={44,55,32,76,44};

//     cout<<arr[0]<<"\n";
//     cout<<arr[1]<<"\n";
//     cout<<arr[2]<<"\n";
//     cout<<arr[3]<<"\n";
//     cout<<arr[4]<<"\n";
//     return 0;
// }

//Output using loops

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[5]={44,55,32,76,44};
//     int arrSize=5;
//     for(int i=0;i<arrSize;i++){
//         cout<<arr[i]<<endl;
//     }
//     return 0;
// }

//Input an array using a loop

// #include<iostream>
// using namespace std;
// int main(){
//     int arrSize=5;
//     int arr[arrSize];
//     //input
//     for(int i=0;i<arrSize;i++){
//         cin>>arr[i];
//     }

//     for(int i=0;i<arrSize;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }


//Smallest number in array

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[5]={44,-55,23,87,33};
//     int smallest= INT32_MAX;
//     for(int i=0;i<5;i++){
//         if(arr[i]<smallest){
//             smallest=arr[i];
//         }
//     }
//     cout<<"Smallest is "<<smallest;
// }

//Update Array elements
#include<iostream>
using namespace std;
int main(){
    int arr[5]={44,-55,23,87,33};
    arr[1]=50;

    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}