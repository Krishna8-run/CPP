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
            cout<<"copying original to deep copy."<<endl;
            name=original.name;
            color=original.color;
            mileage=new int;
            *mileage=*original.mileage;
          }
};
int main(){
  Car c("lamborgini","red");
  Car c1(c);
  cout<<c1.name<<endl;
  cout<<c1.color<<endl;
  cout<<*c1.mileage<<endl;
  *c1.mileage=10;
  cout<<*c.mileage<<endl;
   cout<<*c1.mileage<<endl;
    cout<<c.mileage<<endl;
        cout<<c1.mileage<<endl;
    return 0;
}