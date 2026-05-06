#include <iostream>
using namespace std;
int* func(){
    int *ptr =new int;
    *ptr=11200;
    cout<<"Value of ptr in function: "<<*ptr<<endl;
    return ptr;
}
int main(){
    int *x= func();
    cout<<*x<<endl;
    return 0;
}