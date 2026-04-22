#include <iostream>
using namespace std;
class Print{
    public:
    void show(int a){
        cout<<"Value of a="<<a<<endl;
    }
   void show(double b){
        cout<<"Value of b="<<b<<endl;
    }
   void show(string str){
        cout<<"Name="<<str<<endl;
    }
};
int main(){
    Print p;
    p.show(78);
    p.show("Krishna sah");
    p.show(45.67);
    return 0;
}