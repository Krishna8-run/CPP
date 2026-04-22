#include <iostream>
#include <climits>
using namespace std;
void maxsum(int *arr,int n){
    int maxsum=INT_MIN;
    int sum=0;
    for(int start=0;start<n;start++){
        sum=sum+arr[start];
        maxsum=max(sum,maxsum);
        if(sum<0){
            sum=0;
        }
    }
    cout<<"maxsum="<<maxsum;
}
int main(){
    int arr[]={-2,-3,-6,-5,-4,-2};
    int n=sizeof(arr)/sizeof(int);
    maxsum(arr,n);
    return 0;
}