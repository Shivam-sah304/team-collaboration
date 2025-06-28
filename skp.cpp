#include<iostream>
using namespace std;
class complex{
    private:
     int real,img;
    public:
    void input(){
        cout<<"Enter the real and imaginary part :"<<endl;
        cin>>real>>img;

    }
    complex(){
        real = 0;
        img = 0;
    }
    complex(int r, int i){
        real = r;
        img = i;
    }
    void addcom(complex c1,complex c2){
        real = c1.real + c2.real;
        img = c1.img + c2.img;
    }
    void display(){
        cout<<"The sum of the two complex numbers is: "<<real<<" + "<<img<<"i"<<endl;
    }

};
int main(){
    complex c1, c2, c3;
    c1.input();
    c2.input();
    c3.addcom(c1, c2);
    c3.display();
    return 0;
}