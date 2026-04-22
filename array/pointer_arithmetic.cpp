#include <iostream>
using namespace std;
int main(){
    int a=5;
    int *ptr=&a;
    cout<<"ptr="<<ptr<<endl;
    ptr++;
    cout<<"increment integer pointer="<<ptr<<endl;
    cout<<"increment with +2= "<<ptr+2<<endl;
    
    char b='f';
    char *ptrc=&b;
    cout<<"ptr character when pointer is character ="<<ptrc<<endl;
     ptrc++;
    cout<<"increment character pointer="<<ptrc<<endl;
    
    char d='h';
    char *ptrd=&d;
    cout<<"ptr character when pointer is character ="<<static_cast<void*>(ptrd)<<endl;
     ptrd--;
    cout<<"decrement character pointer="<<static_cast<void*>(ptrd)<<endl;
}