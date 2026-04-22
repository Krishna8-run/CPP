#include <iostream>
#include <string>
using namespace std;
class Person{
    int id;
    string password;
    public:
         string name;
         Person(int id){
            this->id=id;
         }
         Person (){

         }
        void setdata(){
             cout<<"enter mame=";
            getline(cin >>ws,name);
            cout<<"enter password=";
            getline(cin>>ws,password);
           
         }
         void getdata(){
            cout<<"Name="<<name<<endl<<"ID="<<id<<endl<<"Password="<<password<<endl;
         }
};
int main(){
    Person p1(1243);
    p1.setdata();
    p1.getdata();

    return 0;

}