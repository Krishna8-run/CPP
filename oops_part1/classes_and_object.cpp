#include <iostream>
#include <string>
using namespace std;
class Student {
    string name;
    float mark;
    int age;
     public:
    void geetdata(){
        cout<<"enter name .";
        getline(cin >> ws,name);
        cout<<"enter mark and age."<<endl;
        cin>>mark >>age;
    }
    void display(){
        cout<<"name="<<name<<endl;
        cout<<"mark="<<mark<<endl;
        cout<<"age="<<age<<endl;
    }
};
int main(){
    Student s1;
    s1.geetdata();
    s1.display();
    return 0;
}