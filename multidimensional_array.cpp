// declaration and initialisation of 2d array

// #include<iostream>
// using namespace std;
// int main(){
//     int matrix[2][3]={
//         {1,2,3},
//         {4,5,6}
//     };
//     for(int i=0;i<2;i++){
//         for(int j=0;j<3;j++){
//             cout<<matrix[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }

// Size of multidimensional array

#include<iostream>
using namespace std;
int main(){
    int arr[2][4];

    cout<<sizeof(arr)<<" Bytes";
    return 0;
}