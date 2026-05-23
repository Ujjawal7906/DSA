/*1 2 3 4
  1 2 3 4
  1 2 3 4
  1 2 3 4*/

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number of rows and column: ";
//     cin>>n; // n=4

//     for(int i=1;i<=n;i++){                
//         for(int j=1;j<=n;j++){
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
//      return 0;
// }


/*A B C D
  A B C D
  A B C D
  A B C D*/
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number of rows and column: ";
//     cin>>n; //n=4

//     for(int i=1;i<=n;i++){ 
//         char ch='A';               
//         for(int j=1;j<=n;j++){
//             cout<<ch<<" ";
//             ch++;
//         }
//         cout<<endl;
//     }
//  return 0;
// }

/*1 2 3
  4 5 6
  7 8 9*/

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number of rows and column: ";
//     cin>>n; //n=3
//     int num=1;    
//     for(int i=1;i<=n;i++){            
//         for(int j=1;j<=n;j++){
//             cout<<num<<" ";
//             num++;
            
//         }
//         cout<<endl;
//     }
//     return 0;
// }

/*A B C D
  E F G H
  I J K L*/

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number of rows and column: ";
//     cin>>n; //n=3
//     char ch='A';    
//     for(int i=1;i<=n;i++){            
//         for(int j=1;j<=n;j++){
//             cout<<ch<<" ";
//             ch++;
            
//         }
//         cout<<endl;
//     }
//     return 0;
// }

/* * 
   * *
   * * *
   * * * *
*/
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number of rows and column: ";
//     cin>>n;   
//     for(int i=1;i<=n;i++){            
//         for(int j=1;j<=i;j++){
//             cout<<"*"<<" ";            
//         }
//         cout<<endl;
//     }
//     return 0;
// }

/* 1
   2 2
   3 3 3
   4 4 4 4*/

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number of rows and column: ";
//     cin>>n;   
//     for(int i=0;i<n;i++){            
//         for(int j=0;j<i+1;j++){
//             cout<<i+1<<" ";            
//         }
//         cout<<endl;
//     }
//     return 0;
// }

/* A
   B B
   C C C 
   D D D D */
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number of rows and column: ";
//     cin>>n;   
//     char ch='A';
//     for(int i=1;i<=n;i++){            
//         for(int j=1;j<=i;j++){
//             cout<<ch<<" ";            
//         }
//         cout<<endl;
//         ch++;
//     }
//     return 0;
// }

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of rows and column: ";
    cin>>n;   
    for(int i=1;i<=n;i++){            
        for(int j=1;j<=i;j++){
            cout<<i<<" ";            
        }
        cout<<endl;
        
    }
    return 0;
}