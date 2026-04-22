#include <iostream>
using namespace std;
class Animal{
    protected:
              void eat(string food){
                cout<<"food="<<food<<endl;
              }
              void breathe(string medium){
                cout<<medium<<endl;
              }
};
class Bird:protected Animal{
       public:
              void fly(){
                cout<<"Bird details."<<endl;
                 eat("Grain");
              breathe("Breathe in the air.");
                cout<<"bird can fly."<<endl;
              }
};
class Fish:protected Animal{
       public:
              void swim(){
                cout<<endl<<"Fish details."<<endl;
                 eat("insect");
              breathe("Breathe inside water.");
                cout<<"Fish can swim."<<endl;
              }
};
class Mammal:protected Animal{
       public:
              void walk(){
               cout<<endl<<"Mammal details."<<endl;
                 eat("vegetable");
              breathe("Breathe in the air.");
                cout<<"Mammal can walk."<<endl;
              }
};
int main(){
    Bird b;
    b.fly();
    Fish f;
    f.swim();
    Mammal m;
    m.walk();
    return 0;
}