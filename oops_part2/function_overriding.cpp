#include <iostream>
#include <string>
using namespace std;
class Parent{
    public:
         virtual void show(){
            cout<<"parent class show..\n";
          }
};
class Child:public Parent{
    public:
         void show(){
            cout<<"child class show.";
         }
};
int main(){
    Parent* parent1;
    Child child1;
    parent1=&child1;
    parent1->show();  //calls parent class show function
    return 0;
}