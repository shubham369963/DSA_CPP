#include<iostream>
using namespace std;

class A{
    private:
    int a;
    int b;

    public:
    void get(){
        cout<<a<<" "<<b<<endl;
    }

    void set(int a, int b){
        this->a = a;
        this->b = b;
    }
};

class B: public A{
    private:
    int c;

    public:
    void setC(int a){
        this->c = a;
    }

    void getC(){
        cout<<c<<endl;
    }
};


class C: public A, public B{

};

int main(){

    A a;

    a.set(22, 55);
    a.get();

    B b;

    b.set(10, 90);
    b.get();

    C c;

    c.setC(55);
    c.getC();
    c.set(41, 42);
    c.get();

    return 0;
}