#include <iostream>
using namespace std;
bool isprime(int a){
     if(a==1){
     cout<<"1 is neither prime nor composite."<<endl;
     return false;
    }
     else{
        for(int i=2;i<a;i++){
            if(a%i==0){
                return false;
            }
            
        }
        return true;
     }
}
int main(){
    int n=9;
   cout<<isprime(n);
}