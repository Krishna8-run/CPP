#include <iostream>
using namespace std;
int main(){
    int n=23;
            int prev=0,next=1,sum;
            cout<<"0,1,";
    for(int i=3;i<n;i++){
      sum=prev+next;
        cout<<sum<<",";
       prev=next;
        next=sum;
    }
}