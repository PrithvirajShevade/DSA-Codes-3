// //taking input with declearing the size
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int> v(5); 
//     //input
//     for(int i=0;i<5;i++){
//         cin>>v[i];
//     }

//      for(int i=0;i<5;i++){
//         cout>>v[i];
//     }

    
// }  


//taking input without declearing the size


#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v; 
    //input
    for(int i=0;i<5;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }

     for(int i=0;i<5;i++){
        cout<<v[i]<<" ";
    }

}  

