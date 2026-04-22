#include <iostream>
using namespace std;
class B;
class A{
    private:
    int a=10;
    friend class B; // declaring class B as friend class
};
class B{
    public:
    int b=89;
    void func(A obj1){
        cout<<"Value of a is: "<<obj1.a<<endl;
    }

};


int main(){
    A obj1;
  B obj2;
  obj2.func(obj1);
    return 0;
}