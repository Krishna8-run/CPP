#include <iostream>
using namespace std;
bool check(int a){
    if (a%2==0){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    int n=7;
     int c=check(n);
     cout<<c;
    return 0;
}