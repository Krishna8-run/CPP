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
                cout<<endl<<"Bird details."<<endl;
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
class Cow:protected Mammal{
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
            display_data();
          }
           void display_data(){
             walk();
             cout<<"cow details.";
            cout<<endl<<"Food="<<food<<endl<<"No. of legs="<<leg<<endl<<"Sound produce="<<sound<<endl;
            }
};
int main(){
    Cow c;
    c.getdata();
    Bird b;
    b.fly();
    Fish f;
    f.swim();
    return 0;
}