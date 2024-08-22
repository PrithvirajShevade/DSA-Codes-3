#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;   //you need not mention the size
    // inserting / input do not use []
    v.push_back(6);
    //cout<<v.size(); //it provides us size
    cout<<v.capacity(); // it provides cpacity 
    v.push_back(8);
    //cout<<v.size();
    cout<<v.capacity();
    v.push_back(2);
    //cout<<v.size();
    cout<<v.capacity();
    v.push_back(1);
    //cout<<v.size()<<" ";
    cout<<v.capacity();

    // if you want to update or access you can use []

    // cout<<v[0]<<" ";
    // cout<<v[1]<<" ";
    // cout<<v[2]<<" ";
    // cout<<v[3]<<" ";

}  