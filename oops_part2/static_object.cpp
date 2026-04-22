#include <iostream>
using namespace std;
class StaticObject {
    public:
    int objectCount=5; // Declaration of static data member
    StaticObject() {
        cout<<"constructor called."<<endl; // Increment count when a new object is created
    }
    ~StaticObject() {
        cout<<"destructor called."<<endl; // Decrement count when an object is destroyed
    }
};
//int StaticObject::objectCount = 0; // Definition and initialization of static data member
int main(){
    if(true){
     static StaticObject obj1;//static object is destroyed when program ends
       StaticObject obj2;
      StaticObject obj3;
}
StaticObject obj4;
    cout<<obj4.objectCount<<endl; // Accessing static member via object
    return 0;
}