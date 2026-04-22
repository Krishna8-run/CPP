#include <iostream>
using namespace std;
int main(){
    int P;
    float R,T;
    cout<<"enter principal,rate and time:"<<endl;
    cin>>P>>R>>T;
    cout<<"simple interest="<<(P*R*T)/100;
    return 0;
}