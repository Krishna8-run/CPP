#include <iostream>
using namespace std;
class Person{
    protected:
    string name;
    int age;
    public:
    Person(string n,int a){
        name=n;
        age=a;
    }
};
class Student:public Person{
    string studentID;
    public:
        Student(string n,int a,string id):Person(n,a){
            studentID=id;
        }
         void displayStudentinfo(){
         cout<<"Name:"<<name<<endl;
         cout<<"Age:"<<age<<endl;
         cout<<"StudentID:"<<studentID<<endl; 
         }
};
int main(){
    Student student("ram",20,"S12345");
    student.displayStudentinfo();
    return 0;
}