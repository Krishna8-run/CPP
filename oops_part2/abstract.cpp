#include <iostream>
#include <string>
using namespace std;
class shape{
    public:
    virtual void draw()=0; // pure virtual function and abstract class
};
class circle: public shape{
    public:
    void draw() {
        cout<<"Drawing Circle"<<endl;
    }
};
class rectangle: public shape{
    public:
    void draw() {
        cout<<"Drawing Rectangle"<<endl;
    }
};
int main(){
    circle c;
    c.draw();
    rectangle r;
    r.draw();
    shape s; // error: cannot declare variable 's' to be of abstract type 'shape'
    s.draw();
    return 0;
}