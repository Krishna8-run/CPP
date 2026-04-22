#include <iostream>
using namespace std;
int main(){
  for(int i=0;i<=3;i++){
    for(int j=0;j<=i;j++){
        cout<<"*";
        if(i==j){
            break;
        }
    }
    for(int k=0;k<6-2*i;k++){
        cout<<".";
    }
    for(int j=0;j<=3;j++){
        if(i+j>=3){
            cout<<"*";
        }
          
    }
      cout<<endl;
  }
}  