#include <iostream>
using namespace std;
int main(){
    int x=56;
    int *ptr=&x;
    cout<<&ptr<<endl;//address of pointer
    cout<<ptr<<endl;//address of value x
    cout<<*ptr<<endl;    //value of x  
    ptr=NULL;
      cout<<&ptr<<endl;//address of pointer
    cout<<ptr<<endl;//0
    // cout<<*ptr<<endl;    //invalid

}