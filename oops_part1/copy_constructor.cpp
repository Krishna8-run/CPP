#include <iostream>
using namespace std;
class Car{
    string name,color;
    public:
          Car(string name,string color){
            this->name=name;
            this->color=color;
            cout<<"original car details."<<endl;
           cout<<"car name="<<name<<endl;
            cout<<"car color="<<color<<endl;
          } 
          Car(Car &c3){
            cout<<"copy constructor called."<<endl;
            name="lamborgini";
            color=c3.color;
             cout<<"car name="<<name<<endl;
            cout<<"car color="<<color<<endl;
          }
};
int main(){
    Car c1("maruti","red");
    Car c2(c1);
    return 0;
}