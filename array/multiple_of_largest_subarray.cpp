#include <iostream>
using namespace std;
void subarray(int *arr,int n){
            int largeMul=1;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            cout<<"[";
            int mul=1;
            for(int k=i;k<=j;k++){
                cout<<arr[k];
                 mul=mul*arr[k];
                if(k<j){
                    cout<<",";
                }
            }
            cout<<"]"<<endl;
            cout<<"multiple="<<mul<<endl;
            largeMul=max(largeMul,mul);   
        }
    }
      cout<<"largest multiple value="<<largeMul;
}
int main(){
 int arr[]={1,3,2,4,-4,6,-3,9};
 int n=sizeof(arr)/sizeof(int);
   subarray(arr,n);
   return 0; 
}