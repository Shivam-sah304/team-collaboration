#include<iostream>
using namespace std;
class compare{
    private:
    int a;
    public:
    void input(){
        cout<<"enter the value of a: "<<endl;
        cin>>a;
    }
    int operator <= (compare c){
        return(a<=c.a?1:0);
    }
};
int main(){
    compare c1,c2;
    c1.input();
    c2.input();
    if(c1<=c2){
        cout<<"c1 is less than or equal to c2"<<endl;
    } else {
        cout<<"c1 is greater than c2"<<endl;
    }
}
hi mr shivam
