#include <iostream>
using namespace std;
int main(){
    int n=7;
  for(int i=0;i<=n-1;i++){
    for(int j=0;j<=i;j++){
        cout<<"*";
        if(i==j){
            break;
        }
    }
    for(int k=0;k<(n-1)*2-2*i;k++){
        cout<<".";
    }
    for(int j=0;j<=n-1;j++){
        if(i+j>=n-1){
            cout<<"*";
        }
          
    }
      cout<<endl;
  }
   for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
        cout<<"*";
        if(i+j==n+1){
            break;
        }
    }
    for(int k=0;k<2*i-2;k++){
        cout<<".";
    }
    for(int j=1;j<=n;j++){
        if(j>=i){
            cout<<"*";
        }
          
    }
      cout<<endl;
  }
}  
