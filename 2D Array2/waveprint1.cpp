#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter rows of matrix : ";
    cin>>m;
    int n;
    cout<<" Enter column of matrix : ";
    cin>>n;
    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    cout<<endl;

    // //wave print
    // for(int i=0;i<m;i++){
    //     if(i%2==0){
    //         for(int j=0;j<n;j++){
    //         cout<<arr[i][j]<<" ";
    //         }
    //     }
    //     else{// i = 1,3,5
    //         for(int j=n-1;j>=0;j--){
    //             cout<<arr[i][j]<<" ";
    //         }
    //     }

    // }

       //column print
    for(int j=0;j<n;j++){
        if(j%2==0){
            for(int i=0;i<m;i++){
            cout<<arr[i][j]<<" ";
            }
        }
        else{// i = 1,3,5
            for(int i=n-1;i>=0;i--){
                cout<<arr[i][j]<<" ";
            }
        }

    }


}