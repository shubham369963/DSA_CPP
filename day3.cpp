#include<iostream>
using namespace std;


int main(){

    // *
    // **
    // ***


    for(int i=1; i<=5; i++){ // row
        for(int j=1 ; j<=i; j++){ //col
            cout<<"*";
        }
        cout<<endl;
    }

    cout<<endl<<endl;


    //***
    //***
    //***


    for(int i=0; i<5; i++){ //row
        for(int j=0; j<5;j++){ //col
            cout<<"*";
        }
        cout<<endl;
    }


    cout<<endl<<endl;

    int row=5,col=5;

    for(int i=0; i<row; i++){
        int cnt=1;
        for(int j=i; j<col;j++){
            cout<<cnt;
            cnt++;
        }
        cout<<endl;
    }




    return 0;
}
