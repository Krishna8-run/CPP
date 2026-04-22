#include <iostream>
using namespace std;
void func(){
    cout<<"hello";
}
int main(){
   void (*ptr)()=func;
   cout<<ptr<<endl;
   cout<<&ptr<<endl;
   (*ptr)();
   cout<<endl;
   ptr();
}