#include<iostream>
using namespace std;

int main(){

    //array
    // int a = 8;


    // int n;
    // cin>>n;

    // int arr[n] = {0};

    // for(int i=0; i<n; i++){ 
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;

    // cout<<"enter element"<<endl;
    // for(int i=0; i<n; i++){
    //     cin>>arr[i];
    // }

    // for(int i=0; i<n; i++){
    //     cout<<arr[i]<<" ";
    // }

    // int value = 0;

    // for(; value<=7; value++){
    //     cout<<value<<" ";
    // }

    // int value = 0;

    // while(value<7){
    //     cout<<value<<" ";
    //     value++;
    // }

    // int value = 0;

    // do{
    //     cout<<value<<" ";
    //     value++;
    // }while(value<7);


    int a = 8;

    int *ptr = &a;

    int **p = &ptr;

    cout<<a<<endl; //8
    cout<<&a<<endl; //0x62febc
    cout<<ptr<<endl; //0x62febc
    cout<<*ptr<<endl; //8
    cout<<&ptr<<endl; //0x62feb8
    cout<<**p<<endl; //8
    cout<<*p<<endl; //0x62febc
    cout<<p<<endl; //0x62feb8
    cout<<&p<<endl; //0x62feb4




    return 0;
}
