#include <iostream>
using namespace std;
void selection_sort(int *arr,int n){
    for(int i=0;i<n-1;i++){
        int minimum=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minimum]){
                minimum=j;
            }
        }
            swap(arr[i],arr[minimum]);
        
    }
    cout<<"[";
    for(int k=0;k<n;k++){
        cout<<arr[k];
        if(k<n-1){
            cout<<",";
        }
    }
    cout<<"]";
}
int main(){
    int arr[]={5,4,1,3,2,8,5,-4,6,9,1,32,-6,3};
    int n=sizeof(arr)/sizeof(int);
    selection_sort(arr,n);
    return 0;
}