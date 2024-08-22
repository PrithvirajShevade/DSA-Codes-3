// #include<iostream>
// using namespace std;
// int main(){
//     int arr[] = {1,2,3,4,5};
//     int* ptr = arr;    //giving address
//     cout<<ptr<<endl;
//     ptr[0] = 6;         // after assigning the address to pointer we can simply modify the point and also print the whole array
//     for(int i=0;i<=4;i++){
//         cout<<ptr[i]<<" ";
//     }
   
// }


//without using square brackets print the array


#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,5};
    int* ptr = arr;    //giving address
    for(int i=0;i<=4;i++){
        cout<<*ptr<<" ";
        ptr++;
    }
    ptr = arr;// ptr is pointing to 1st element

    *ptr = 8;  //ptr[0] = 8
    ptr++;
    *ptr = 9;  //ptr[1] = 9
    ptr--;    //ptr is pointig to 1st element
    cout<<endl;

    for(int i=0;i<=4;i++){
        cout<<*ptr<<" ";
        ptr++;
    }

    ptr = arr;  //ptr is pointing to 1st element


}