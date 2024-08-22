// #include<iostream>
// using namespace std;
// int main(){
//     int m;
//     cout<<"enter no of rows : ";
//     cin>>m;
//     cout<<"Enter no of column : ";
//     cin>>m;
//     int arr[m][m];
//     for(int i=0;i<m;i++){
//         for(int j=0;j<m;j++){
//             cin>>arr[i][j];
//         }
//     }
//     cout<<endl;

//     for(int i=0;i<m;i++){
//         for(int j=0;j<m;j++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     cout<<endl;

//     for(int i=0;i<m;i++){
//         for(int j=0;j<m;j++){
//             if(i==j || i+j==m-1){
//                 cout<<arr[i][j]<<" ";
//             }
//             else{
//                 cout<<" ";
                
//             }
            
//         }
//         cout<<endl;
//     }
    

// }


#include<iostream>
using namespace std;
int main(){
int n , m;
cout << "Enter the number of rows : ";
cin >> n;
cout << "Enter the number of columns : ";
cin >> m;
int a[n][n];
cout << "Enter the matrix elements : "<<endl;
for(int i = 0 ; i < n ; i++){
for(int j = 0 ; j < m ; j++){
cin >> a[i][j];
}
}
cout<<"Elements in the wave form are: "<<endl;
for(int j = 0 ; j < m ; j++){
    for(int i=n-1;i<=0;i++){
        cout<<a[j][i]<<" ";

        }
    }
}