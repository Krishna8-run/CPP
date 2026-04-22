#include <iostream>
using namespace std;
int main(){
    int a=7;
    int *ptr=&a;
    cout<<&ptr<<endl;//address of pointer
    cout<<ptr<<endl;//address of value a
    cout<<*ptr<<endl;    //value of a
    ptr=NULL;//ptr=nullptr;
     cout<<&ptr<<endl;//address of pointer
    cout<<ptr<<endl;    //0 (not address of a)
    cout<<*ptr<<endl;//dereference of ptr tend to crash 
}
   