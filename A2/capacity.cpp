// by using [] we can access update and print values
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;   //you need not mention the size
    // inserting / input do not use []
    v.push_back(6);
    v.push_back(8);
    v.push_back(2);
    v.push_back(1);
    v.push_back(6);
    v.push_back(8);
    v.push_back(2);
    v.push_back(1);
    v.push_back(8);
    v.push_back(2);
    v.push_back(1);
    v.push_back(6);
    v.push_back(8);
    v.push_back(2);
    v.push_back(1);
    v.push_back(6);
    v.push_back(8);
    v.push_back(2);
    v.push_back(1);
    v.push_back(8);
    v.push_back(2);
    v.push_back(1);
    cout<<"size is"<<v.size()<<endl;
    cout<<"capacity is"<<v.capacity()<<endl;
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    cout<<"size is"<<v.size()<<endl;
    cout<<"capacity is"<<v.capacity()<<endl;







}  