#include <iostream>
using namespace std; 
class test{
    static int count; // declaration of static data member
     int num=10; //  data member
    public:
    static void increment(){
        count++;
    }
    static void display(){
        cout<<"Count: "<<count<<endl;
    }
};  
int test::count=4;
int main(){
 test::increment();
test::display(); // Output: Count: 5
 test::increment();
test::display(); // Output: Count: 6
}