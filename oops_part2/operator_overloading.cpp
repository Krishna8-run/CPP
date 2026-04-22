#include <iostream>
using namespace std;
class convert{
    int x,y,z;
    public:
        convert(){
            cout<<"enter three values:";
            cin>>x>>y>>z;   
        }
        void operator-(){
            x=-x;
            y=-y;
            z=-z;
        }
        void display(){
            cout<<"x="<<x<<endl;
            cout<<"y="<<y<<endl;
            cout<<"z="<<z<<endl;
        }
};
int main(){
 convert obj;
 -obj;
 obj.display();
    return 0;
}