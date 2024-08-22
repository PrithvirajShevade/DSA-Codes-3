#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter rows of 1st matrix : ";
    cin>>a;
    int b;
    cout<<" Enter column of 1st matrix : ";
    cin>>b;

    int c;
    cout<<"Enter rows of 2st matrix : ";
    cin>>c;
    int d;
    cout<<" Enter column of 2st matrix : ";
    cin>>d;

    if(b==c){
        
    int arr[a][b];
    cout<<"enter elements of 1st matrix : ";
    for(int i=0;i<a;i++){         // i = rows, j = columns
        for(int j=0;j<b;j++){
            cin>>arr[i][j];
        }
    }
    int brr[c][d];
    cout<<"enter elements of 2st matrix : ";
    for(int i=0;i<c;i++){         // i = rows, j = columns
        for(int j=0;j<d;j++){
            cin>>brr[i][j];
        }
    }
    // resultant matrix
    int res[a][d];
    for(int i=0;i<a;i++){
        for(int j=0;j<d;j++){
             res[i][j] = 0;
            //multiply (res[i][j] = a[i][0]*b[0][j] + a[i][1]*b[1][j] + and so on)
            for(int k=0;k<c;k++){
                res[i][j] += arr[i][k]*brr[k][j];
            }
        }
    }
    cout<<endl;
    for(int i=0;i<a;i++){
        for(int j=0;j<d;j++){
            cout<<res[i][j]<<" ";
             }
             cout<<endl;
        }
    }
    else{ // n!=p
        cout<<"the matrices cannot multiply";
    }



}