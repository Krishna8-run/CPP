#include <iostream>
#include <string>
using namespace std;
class Parent{
    public:
          void show(){
            cout<<"parent class show..\n";
          }
          virtual void hello(){
            cout<<"Parent hello.";
          }
};
class Child:public Parent{
    public:
         void show(){
            cout<<"child class show.";
         }
           void hello(){
            cout<<"child hello.";
          }
};
int main(){
    Child child1;
    Parent *ptr;
    ptr=&child1;//run time binding
    ptr->hello();//virtual function 
    return 0;
}