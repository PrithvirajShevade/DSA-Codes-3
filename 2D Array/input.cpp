#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"enter the no of rows : ";
    cin>>m;
    int n;
    cout<<"enter the no of columns : ";
    cin>>n;
    int arr[m][n];
    for(int i=0;i<=m-1;i++){
        for(int j=0;j<=n-1;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<=m-1;i++){
        for(int j=0;j<=n-1;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

// write a program to store roll number and marks obtained
// by 4 student side by side in a matrix

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[2][4] = {{5,6,7,8},{60,70,80,90}};
//     for(int i=0;i<=1;i++){
//         for(int j=0;j<=3;j++)
//         cout<<arr[i][j]<<" ";
//          cout<<endl;
//     }
   
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[4][2];
//     for(int i=0;i<=3;i++){
//         for(int j=0;j<=1;j++){
//             cin>>arr[i][j];
//         }
//     }
//         for(int i=0;i<=3;i++){
//             for(int j=0;j<=1;j++){
//                 cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }

// }