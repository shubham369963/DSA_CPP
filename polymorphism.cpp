#include<iostream>
using namespace std;

//polymorphism
// 1 - compile time / static polymorphism
//     - function overloading
//     - operator overloading
// 2 - run time / dynamic polymorphism
//     - method overriding

class A{
    //function overloading
    public:
    void say(){
        cout<<"hello"<<endl;
    }

    void say(string str){
        cout<<str<<endl;
    }

    void say(string str1, string str2){
        cout<<str1<<" "<<str2<<endl;
    }

};

class B{

    //operator overloading
    public:
    int a;
    int b;

    public:
    int add(){
        return a+b;
    }

    void operator+(B &b2){
        int value1 = b2.a;
        int value2 = this->a;

        cout<<"output"<<value2-value1<<endl;
    }
};

//method overriding
class X{
    public:
    void say(){
        cout<<"Animal"<<endl;
    }
};

class Y: public X{
    public:
    void say(){
        cout<<"Lion"<<endl;
    }
};

class Z: public Y{
    public:
};


int main(){

    // A a1;

    // a1.say();
    // a1.say("Happy");
    // a1.say("Happy", "Coding");


    // B b1;
    // B b2;
    // B b3;

    // b1.a = 20;
    // b2.a = 30;
    // b3.a = 40;

    // b1+b3;

    X x1;

    x1.say();

    Y y1;

    y1.say();

    Z z1;

    z1.say();


    return 0;
}