#include<iostream>
#include<vector>
using namespace std;            // after using & before a it not create new vector but it points the same v vector nad it is pass by reference
void change(vector<int>& a){    //a-> 6 8 2 1   // here we create new vector and all values of v vector get copied into a vector
    a[0] = 100;                // 100 8 2 1 
//     for(int i=0;i<a.size();i++){
//         cout<<a[i]<<" ";
//    }
//    cout<<endl;
}
int main(){
    vector<int> v;  
    v.push_back(6);
    v.push_back(8);
    v.push_back(2);
    v.push_back(1);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
   }
   cout<<endl;
   change(v);
   for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
   }
   cout<<endl;
}