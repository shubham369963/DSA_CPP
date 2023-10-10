#include<iostream>
using namespace std;


int main(){

    // binary search - O(log n)

    // int arr[8] = {2,5,7,9,5,3,2,1};

    // int left = 0;
    // int right = 7;

    // int mid = (right + left)/2;
    // int key = 23;
    // while(left <= right){
    //     if(arr[mid] == key){
    //         cout<<"present"<<endl;
    //         break;
    //     }else if(arr[mid] > key){
    //         right = mid-1;
    //     }else{
    //         left = mid+1;
    //     }
    //     mid = (right + left)/2;
    // }


    // int arr[8] = {2,5,7,9,11,3,2,1};

    // int left =0;
    // int right = 7;

    // int mid = (left + right)/2;
    // while(left <= right){
    //     if(arr[mid] > arr[mid-1] && arr[mid] < arr[mid+1]){
    //         left = mid+1;
    //     }else if(arr[mid] < arr[mid-1] && arr[mid] > arr[mid+1]){
    //         right = mid-1;
    //     }else{
    //         cout<<arr[mid]<<endl;
    //         break;
    //     }
    //     mid = (left + right)/2;
    // }

    return 0;
}