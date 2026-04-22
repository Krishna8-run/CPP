#include <iostream>
#include <string>
using namespace std;
class Teacher{
    protected:
             string name;
             int salary;
             string subject;
    public:
         void  getdata(){
            cout<<"enter name of teacher=";
            getline(cin>>ws,name);
            cout<<"salary=";
            cin>>salary;
            cout<<"subject=";
            cin>>subject;
           }
};
class Student{
    protected:
             string name;
             int roll_no;
             float cgpa;
    public:
           void getdata(){
            cout<<"enter name of student=";
            getline(cin>>ws,name);
            cout<<"roll=";
            cin>>roll_no;
            cout<<"enter cgpa=";
            cin>>cgpa;
           }
};
class derived:protected Teacher,protected Student{
    public:
          void display(){
            Teacher::getdata();
            Student::getdata();
            cout<<endl<<"Name="<<Teacher::name<<endl<<"salary="<<salary<<endl<<"subject="<<subject<<endl<<"Roll_no="<<roll_no<<endl<<"CGPA="<<cgpa<<endl;
           }

};
int main(){
    derived d;
    d.display();

}