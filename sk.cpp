#include<iostream>
using namespace std;
class two;
class one{
    private:
    int a;
    public:
    void input(){
        cout<<"Enter a number: "<<endl;
        cin>>a; 
    }
    friend int add(one, two);
};
class two{
    private:
       int b;
    public:
       void input(){
        cout<<"Enter another number: "<<endl;
        cin>>b; 
    }
    friend int add(one, two);
};
int add(one o, two t){
    return o.a + t.b;
}
int main(){
    one o;
    two t;
    o.input();
    t.input();
    cout<<"The sum of the two numbers is: "<<add(o, t)<<endl;
    return 0;
}