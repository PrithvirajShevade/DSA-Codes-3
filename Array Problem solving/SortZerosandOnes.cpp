// //sort the array of 0's and 1's

// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// void sort01(vector<int>& v){
//     int n = v.size();
//     int zero = 0;
//     int one = 1;
//     for(int i=0;i<n;i++){
//         if(v[i]==0) zero++;
//         else one++;
//     }
//     // filling elements
//     for(int i=0;i<n;i++){
//         if(i<zero) v[i] = 0;
//         else v[i] = 1;
//     }
// }
// int main(){
//     vector<int> v;
//     v.push_back(0);
//     v.push_back(1);
//     v.push_back(0);
//     v.push_back(0);
//     v.push_back(1);
//     v.push_back(1);
//     v.push_back(0);
//     v.push_back(1);

//     for(int i=0;i<v.size();i++){
//         cout<<v[i]<<" ";
//     }
//     cout<<endl;

//     sort01(v);
//     for(int i=0;i<v.size();i++){
//         cout<<v[i]<<" ";
   

// }
// }



// another method to solve this question


#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void display(vector<int>& v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}
void method2(vector<int>& v){
    int i = 0;
    int j = v.size()-1;
    while(i<j){
        if(v[j]==1) j--;
        if(v[i]==0) i++;
        if(i>j) break;
        if(v[i]==1 && v[j]==0);{
        v[i]=0;
        v[j]=1;
        i++;
        j--;
    }
    }
}
int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);

    display(v);
    cout<<endl;
    method2(v);
    display(v);
    
    

}
