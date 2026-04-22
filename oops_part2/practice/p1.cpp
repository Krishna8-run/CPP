#include <iostream>
using namespace std;
class complex{
    int real,imaginary;
    public:
    complex(){
        real=0;
        imaginary=0;
    }
    complex(int r,int i){
        real=r;
        imaginary=i;
    }
    void display(){
        cout<<real<<"+"<<imaginary<<"i"<<endl;
    }
    complex operator -(complex c){
        complex temp;
        temp.real=real-c.real;
        temp.imaginary=imaginary-c.imaginary;
        return temp;
    }
};
int main()
{
 complex c1(5,6),c2(15,14);
 complex c3=c1-c2;
    c3.display();
        return 0;   
}