#include <iostream>
using namespace std;
int main(){
    float c_pencil,c_pen,c_eraser,c1,c2,c3;
    cout<<"enter cost of pencil,pen,eraser:"<<endl;
    cin>>c_pencil>>c_pen>>c_eraser;
    c1=((18.0/100)*c_pencil)+c_pencil;
    c2=((18.0/100)*c_pen)+c_pen;
    c3=((18.0/100)*c_eraser)+c_eraser;
    cout<<"cost of items after including 18% GST\n"<<"pencil="<<c1<<"\npen="<<c2<<"\neraser="<<c3<<endl;
    return 0;
}