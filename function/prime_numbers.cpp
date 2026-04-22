#include <iostream>
using namespace std;
bool isprime(int b){
     if(b==1){
     cout<<"1 is neither prime nor composite."<<endl;
     return false;
    }
     else{
        for(int i=2;i<b;i++){
            if(b%i==0){
                return false;
            }
            
        }
        return true;
     }
}
void prime(int a){
for(int i=2;i<=a;i++){
    if(isprime(i)){   //for true it print i
        cout<<i<<" ";
    }
}
}
int main(){
    int n=31;
    prime(n);
    return 0;
}