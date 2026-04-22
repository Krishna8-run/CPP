#include<iostream>
using namespace std;
int main(){
int arr[4][4],sum=0;
                cout<<"enter array value:";
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cin>>arr[i][j];
        }
    } 
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            if(i==j||i+j==3){
                sum=sum+arr[i][j];
            }
        }
    }
    cout<<"sum="<<sum;
}