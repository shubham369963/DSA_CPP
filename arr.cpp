#include <iostream>
using namespace std;
// @abhi patil
int main()
{

    // int arr[4];

    // for(int i=0; i<4; i++){
    //     cin>>arr[i];
    // }

    int left = 0;
    int right = 3;

    while(left < right){
        swap(arr[left], arr[right]);

        // int temp = arr[left];
        // arr[left] = arr[right];
        // arr[right] = temp;

        left++;
        right--;
    }

    // for(int i=0; i<4; i++){
    //     cout<<arr[i]<<" ";
    // }

    int arr[4];

    for(int i=0; i<4; i++){
        cin>>arr[i];
    }
    int key = 5;

    for(int i=0; i<4; i++){
        if(arr[i] == key){
            cout<<"present"<<endl;
        }
    }

    return 0;
}
