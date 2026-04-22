#include <iostream>
#include <climits>
using namespace std;
void subarray(int n,int *arr){
    int maxsum=INT_MIN;
    for(int start=0;start<n;start++){
        int sum=0;
        for(int end=start;end<n;end++){
           sum += arr[end];
           maxsum=max(maxsum,sum);
        }
    }
    cout<<"maximum subarray sum="<<maxsum<<endl;
}


int main(){
    int arr[]={3,-6,5,-7,8,45};
    int n=sizeof(arr)/sizeof(int);
     subarray(n,arr);
     return 0;
}