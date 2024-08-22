#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;  
    v.push_back(6);
    v.push_back(8);
    v.push_back(2);
    v.push_back(1);
    // second method to update the value in array
    //v.at(2) = 60;
    //cout<<v.at(2);
    for(int i=0;i<v.size();i++){
        cout<<v.at(i)<<" ";
   }
   cout<<endl;
   //sort
   sort(v.begin(), v.end());
   for(int i=0;i<v.size();i++){
        cout<<v.at(i)<<" ";
}
}