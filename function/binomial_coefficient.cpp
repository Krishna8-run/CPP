#include <iostream>
using namespace std;
int factorial(int a){
    int prod=1;
    for(int i=a;i>=1;i--){
       prod=prod*i;
    }
    return prod;
}
int main(){
    int n=5,r=4;
    int c=factorial(n)/(factorial(r)*factorial(n-r));
    cout<<"binomial coefficient = "<<c;
}