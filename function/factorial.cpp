#include <iostream>
using namespace std;
void fact(int a){
    int prod=1;
    for(int i=a;i>=1;i--){
       prod=prod*i;
    }
    cout<<"factorial of "<<a<<" is "<<prod;
}
int main(){
    int n=6;
    fact(n);
    return 0;
}