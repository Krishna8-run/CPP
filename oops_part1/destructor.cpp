#include <iostream>
#include <string>
using namespace std;
class Student {
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
int main(){
    Student s;
    return 0;
}