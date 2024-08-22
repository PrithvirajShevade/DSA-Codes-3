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
    cout<<endl;
    for(int i=0;i<=m-1;i++){
        for(int j=0;j<=n-1;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    //print transpose array
    for(int j=0;j<n;j++){
        for(int i=0;i<m;i++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    //store transpose array
    // int t[n][m];
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<m;j++){
    //         t[i][j] = arr[j][i];
    //     }
    // }
    // for(int j=0;j<n;j++){
    //     for(int i=0;i<m;i++){
    //         cout<<t[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

}