#include <iostream>
using namespace std;
class Car{
    public:
          string name,color;
          int *mileage;

          Car(string name,string color){
            this->name=name;
            this->color=color;
            mileage=new int;
            *mileage=12;
          }
          
          Car(Car &original){
            cout<<"copying original to shallow copy."<<endl;
            name=original.name;
            color=original.color;
            mileage=original.mileage;
          }
};
int main(){
  Car c("lamborgini","color");
  Car c1(c);
  cout<<c1.name<<endl;
  cout<<c1.color<<endl;
  cout<<*c1.mileage<<endl;
    return 0;
}