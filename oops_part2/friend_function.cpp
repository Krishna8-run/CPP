#include <iostream>
using namespace std;
class area{
    int rad;
    friend void circle(area);
};
void circle(area a){
    a.rad=5;
    cout<<"Area of circle is: "<<3.14*a.rad*a.rad<<endl;
}
int main(){
 area a;
 circle(a);
 return 0;
}