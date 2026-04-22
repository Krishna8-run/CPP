#include <iostream>
using namespace std;
void subarray(int n,int *arr){
    for(int start=0;start<n;start++){
        for(int end=start;end<n;end++){
            cout<<"[";
            for(int i=start;i<=end;i++){
                cout<<arr[i];
                if(i<end)
                   cout<<",";
            }
            cout<<"]"<<endl;
        }
        cout<<endl;
    }
}
int main(){
    int arr[]={3,6,5,7,8,45};
    int n=sizeof(arr)/sizeof(int);
     subarray(n,arr);
}