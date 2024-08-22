// #include<iostream>
// #include<climits>
// using namespace std;
// int main(){
//     int m;
//     cout<<"enter the no of rows : ";
//     cin>>m;
//     int n;
//     cout<<"enter the no of columns : ";
//     cin>>n;
//     int arr[m][n];
//     for(int i=0;i<=m-1;i++){
//         for(int j=0;j<=n-1;j++){
//             cin>>arr[i][j];
//         }
//     }

//     //max
//     int max = INT_MIN;
//     for(int i=0;i<=m-1;i++){
//         for(int j=0;j<=n-1;j++){
//             if(max<arr[i][j]) max = arr[i][j];
//         }
//     }
//     cout<<max;
// }


// find the second maximu number in 2D array

#include<iostream>
#include<climits>
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

    int max = INT_MIN;
    for(int i=0;i<=m-1;i++){
        for(int j=0;j<=n-1;j++){
            if(max<arr[i][j]) max = arr[i][j];
        }
    }
    cout<<"maximum is : "<<max<<endl;

    int smax = INT_MIN;
    for(int i=0;i<=m-1;i++){
        for(int j=0;j<=n-1;j++){
            if(arr[i][j]!=max && smax<arr[i][j])
            smax = arr[i][j];
        }
    }
    cout<<"second max is : "<<smax<<endl;

}