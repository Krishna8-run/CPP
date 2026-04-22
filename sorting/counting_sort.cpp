#include <iostream>
#include <climits>
using namespace std;
void print(int freq[],int n){
    cout<<"[";
    for(int j=0;j<n;j++){
        cout<<freq[j];
        if(j<n-1){
            cout<<",";
        }
    }
    cout<<"]";
}
void counting_sort(int arr[],int n){
    int minVal=INT_MIN;
    int maxVal=INT_MAX;
    int freq[100000];
    for(int i=0;i<n-1;i++){
        minVal=min(minVal,arr[i]);
        maxVal=max(maxVal,arr[i]);
    }

    for(int j=0;j<=minVal;j++){
        if(arr[j]<=maxVal){
            int count=0;
            for(int k=0;k<n;k++){
                if(arr[k]==arr[j]){
                    count++;
                }
            }
            freq[arr[j]]=count;
        }
    }
    print(freq,n);
}
int main(){
    int arr[]={1,4,1,3,2,4,3,7};
    int n=sizeof(arr)/sizeof(int);
    counting_sort(arr,n);
    return 0;
}