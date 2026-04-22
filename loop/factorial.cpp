#include <iostream>
using namespace std;
int main(){
    int num,fact=1;
    cout<<"enter number:";
    cin>>num;
    int original_num=num;
    while(num!=0){
        fact=fact*num;
        num=num-1;
    }
    cout<<"factorial of "<<original_num<<" is "<<fact;
}