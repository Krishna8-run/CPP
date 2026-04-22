#include <iostream>
using namespace std;
class Student{
    string name;
    int age;
    public:
         Student(string name,int age){
            cout<<"constructor is called automatically.";
            this->name=name;
            this->age=age;
         }
};
int main(){
    Student s1("krishna sah",23);
    return 0;
}