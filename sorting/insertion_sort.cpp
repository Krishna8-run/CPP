#include <iostream>
using namespace std;
void print(int arr[],int n){
    cout<<"[";
    for(int j=0;j<n;j++){
        cout<<arr[j];
        if(j<n-1){
            cout<<",";
        }
    }
    cout<<"]";
}
void insertion_Sort(int *arr,int n){
    //0(n^2)
  for(int i=0;i<n-1;i++){
    int curr=arr[i+1];
    int prev=i;
    while(prev>=0 && arr[prev]>curr){
        swap(arr[prev],arr[prev+1]);
        prev--;
    }
    arr[prev+1]=curr;
  }   
  print(arr,n); 
}
int main(){
    int arr[]={5,4,1,3,-4,6-4,4,6,8,6,2};
    int n=sizeof(arr)/sizeof(int);
    insertion_Sort(arr,n);
    return 0;
}