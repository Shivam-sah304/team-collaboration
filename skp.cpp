#include<iostream>
using namespace std;

class complex1{
    private:
     int real,img;
    public:
    complex1(){
        real = 0;
        img = 0;
    }
    complex1(int r, int i){
        real = r;
        img = i;
    }
    void addcom(complex1 c2){
        real = real + c2.real;
        img = img + c2.img;
    }
    void display(){
        cout<<"The sum of the two complex numbers is: "<<real<<" + "<<img<<"i"<<endl;
    }

};

int main(){
    complex1 c1(2,4), c2(3,5);
    c1.addcom(c2);
    c1.display();
    return 0;
}