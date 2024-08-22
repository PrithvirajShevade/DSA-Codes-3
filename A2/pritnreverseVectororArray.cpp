// #include<iostream>
// #include<vector>
// using namespace std;
// void display(vector<int>& a){
//     for(int i=0;i<a.size();i++){
//         cout<<a[i]<<" ";
//     }
//     cout<<endl;

// }
// int main(){
//     vector<int> v1;
//     v1.push_back(1);
//     v1.push_back(2);
//     v1.push_back(3);
//     v1.push_back(4);
//     v1.push_back(5);
//     v1.push_back(6);

//     display(v1);

//     vector<int> v2 (v1.size());
//     for(int i=0;i<v2.size();i++){
//         // i + j = size-1
//         int j = v1.size() - 1 - i;
//         v2[i] = v1[j];
//     }
//     display(v2);

// }


//reverse the array without using any extra array

#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);
   for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
}
cout<<endl;
    //reverse
    int i = 0;
    int j = v.size()-1;
    while(i<=j){
        // swap v[i] and v[j]
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
        i++;
        j--;
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
}
}


//using for loop

// for(int i=0,j=v.size()-1;i<=j;i++,j--){
// int temp = v[i];
//    v[i] = v[j];
//    v[j] = temp;

// }
// for(int i=0;i<v.size();i++){
//          cout<<v[i]<<" ";

// }
// }




//print with vector not array using inbuilt function

// #include<iostream>
// #include<vector>
// using namespace std;
// void display(vector<int>& a){
//     for(int i=0;i<a.size();i++){
//         cout<<a[i]<<" ";
//     }
//     cout<<endl;
// }
// int main(){
//     vector<int> v;
//     v.push_back(1);
//     v.push_back(2);
//     v.push_back(3);
//     v.push_back(4);
//     v.push_back(5);
//     v.push_back(6);

//     display(v);
  
//      // inbuilt function
     
//     // reverse(v.begin(),v.end());
//     // display(v);
// }