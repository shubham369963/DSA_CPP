#include<iostream>
using namespace std;
//encapsulation
class CITY{
    private:
    int name;
    int area;

    public:
    void getArea(){
        cout<<area<<endl;
    }

    void setArea(int a){
        area = a;
    }
};

int main(){

CITY c1;

c1.setArea(5000);
c1.getArea();

    return 0;
}