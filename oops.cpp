#include<iostream>
using namespace std;

class CAR{
    //member variables / properties
    public:
    string name;
    int height;
    static int width;
    int speed;
    //member functions / actions

    
    public:

    CAR(string name , int height, int width, int speed){
        this->name = name;
        this->height = height;
        this->width = width;
        this->speed = speed;
    }


    CAR(CAR &c1){
        this->name = c1.name;
        this->height = c1.height;
        this->width = c1.width + 1;
        this->speed = c1.speed;
    }

    ~CAR(){
        cout<<"processesing ended"<<endl;
    }

    static void getWidth(){
        cout<<width<<endl;
    }

    void setter(int val){
        height = val;
    }

    void getter(){
        cout<<name<<endl;
        cout<<height<<endl;
        cout<<width<<endl;
        cout<<speed<<endl;
    }

};

int CAR::width = 55;

int main(){

    // CAR c1("audi", 33, 44, 500);
    // c1.getter();
    // CAR c2(c1);

    // CAR *d1 = new CAR();
    // delete d1;

    // c1.setter(34);
    // c2.getter();

    // cout<<CAR::width<<endl;

    CAR::getWidth();

    return 0;
}