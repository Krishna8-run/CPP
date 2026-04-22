#include <iostream>
using namespace std;
class Animal{
    protected:
    string food;
    int leg;
    string sound;
    public:
         void getdata(){
            cout<<"enter details of cow."<<endl;
            cout<<"food=";
            cin>>food;
            cout<<"no. of legs=";
            cin>>leg;
            cout<<"sound=";
            cin>>sound;
          }
};
class cow:protected Animal{
    public:
           void display_data(){
            getdata();
            cout<<endl<<"Food="<<food<<endl<<"No. of legs="<<leg<<endl<<"Sound produce="<<sound<<endl;
            }
};
int main(){
    cow c;
    c.display_data();
    return 0;
}