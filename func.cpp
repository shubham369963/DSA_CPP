#include<iostream>
using namespace std;

// int sum(int &x){

//     int ans = 0;
//     for(int i=1; i<=x; i++){
//         ans = ans + i;
//     }

//     return ans;
// }

void prashant(int &x){

    x = x+1;
    cout<<x<<endl;
    return;
}

int main(){

    // int x =10;

    // int ans = sum(x);

    // cout<<ans;


    int a =3;

    cout<<a<<endl;
    prashant(a);
    cout<<a<<endl;

    return 0;
}
