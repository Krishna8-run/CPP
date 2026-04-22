#include <iostream>
#include <string>
using namespace std;
class Student {
    protected:
    int roll;
    string name;
    public:
    Student(){
        cout<<"enter name=";
        getline(cin>> ws,name);
        cout<<"enter roll=";
        cin>>roll;
    }
    ~Student(){
        cout<<"destructor called.";
    }
};
class derived:public Student{
    public:
        void  display_data(){
            cout<<"Name="<<name<<endl;
            cout<<"Roll no="<<roll<<endl;
          }
};
int main(){
    derived d;
    d.display_data();
    return 0;
}