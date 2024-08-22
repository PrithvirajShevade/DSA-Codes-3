#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>& a){
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);

    display(v);

    //using for loop

    for(int i=0,j=v.size()-1;i<=j;i++,j--){
     int temp = v[i];
     v[i] = v[j];
     v[j] = temp;
}

    for(int i=0;i<v.size();i++){
     cout<<v[i]<<" ";
}

}