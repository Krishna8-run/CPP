#include <iostream>
using namespace std; 
class test{
    static int count; // declaration of static data member
    static const int num=10; // static const data member
    public:
    void increment(){
        count++;
    }
    void display(){
        cout<<"Count: "<<count<<endl;
        cout<<"Num: "<<num<<endl;
    }
};  
int test::count=4;
int main(){
 test t1, t2;
 t1.increment();
    t1.display(); // Output: Count: 5
 t2.increment();
    t2.display(); // Output: Count: 6
}