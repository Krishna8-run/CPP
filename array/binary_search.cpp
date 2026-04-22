#include <iostream>
using namespace std;
int printarr(int *arr,int n,int element){
    int start=0,end=n-1;
    while(start<=end){
       int mid=(start+end)/2;
    if(arr[mid]==element){
        return mid;
    }
    else if(arr[mid]<element){
        start=mid+1;
    }
    else {
        end=mid-1;
    }
   
}
return -1;
}
int main(){
    int arr[]={4,6,9,12,13,14,15,16,17,18,20,22,24,26};//data should be arranged
    int element;
    cout<<"enter the element you want to search"<<endl;
    cin>>element;
    int n=sizeof(arr)/sizeof(int);
    int result=printarr(arr,n,element);
    cout<<"element "<<element<<" is at "<<result<<" position."<<endl;
     return 0;


     
}