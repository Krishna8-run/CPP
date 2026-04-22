#include <iostream>
using namespace std;
void bintodec(int a){
    int dec=0;
    int pow=1;
    while(a!=0){
        int rem=a%10;
        dec=dec+(rem*pow);
        a=a/10;
        pow=pow*2;
    }
    cout<<dec;
}
int main(){
    int n=100;
    bintodec(n);
}