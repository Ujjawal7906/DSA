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
// return 0;
// }

// Size of multidimensional array

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[2][4];

//     cout<<sizeof(arr)<<" Bytes";
//     return 0;
// }

//initialize 2d array

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[2][4]={1,2,3,4,5,6,7,8};
//     for(int i=0;i<2;i++){
//         for(int j=0;j<4;j++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }

// Updation of 2d array

// #include <iostream>
// using namespace std;

// int main() {
//     int arr[2][4] = {{0, 1, 2, 3}, {4, 5, 6, 7}};
    
//     // Accessing 3rd element is 1st row
//     cout << arr[0][2] << endl;
    
//     // Accessing first element in 2nd row
//     cout << arr[1][0] << endl;
    
//     // Updating 3rd element is 1st row
//     arr[0][2] = 22;
//     cout << arr[0][2] << endl;
    
//     // Updating first element in 2nd row
//     arr[1][0] = 99;
//     cout << arr[1][0];
//     return 0;
// }

// updation of 3d array

#include <iostream>
using namespace std;

int main() {
    int arr[2][2][3] = {
        {{0, 1, 2}, {3, 4, 5}},
        {{6, 7, 8}, {9, 10, 11}}
    };

    // Accessing element at depth 
    // 0, row 1, column 2
    cout << arr[0][1][2] << endl;
    
    // Accessing element at depth 
    // 1, row 0, column 1
    cout << arr[1][0][1] << endl;
    
    // Updating element at depth 
    // 0, row 1, column 2
    arr[0][1][2] = 22;
    cout << arr[0][1][2] << endl;
    
    // Updating element at depth \
    
    // 1, row 0, column 1
    arr[1][0][1] = 99;
    cout << arr[1][0][1];
    return 0;
}