//Write a C++ program to get a number from the user and print whether it's positive,negative or zero.
#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"enter the number :";
    cin>>num;
    if(num==0){
        cout<<"zero"<<endl;
    }
    else if(num>0){
        cout<<"positive number."<<endl;
    }
    else{
        cout<<"negative number."<<endl;
    }

}