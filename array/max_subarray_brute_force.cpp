// #include <iostream>
// using namespace std;
// void subarray(int n,int *arr){
//     int maxsum;
//     for(int start=0;start<n;start++){
//         for(int end=start;end<n;end++){
//         int sum=0;
//             for(int i=start;i<=end;i++){
//                    sum=sum+arr[i];
//             }
//             cout<<"sum="<<sum<<endl;
//             maxsum=max(maxsum,sum);
//         }
//         cout<<endl;
//     }
//     cout<<"maximum subarray sum="<<maxsum<<endl;
// }


// int main(){
//     int arr[]={3,-6,5,-7,8,-45};
//     int n=sizeof(arr)/sizeof(int);
//      subarray(n,arr);
// }


#include <iostream>
#include <climits>
using namespace std;
void subarray(int n,int *arr){
    int maxsum=INT_MIN;
    for(int start=0;start<n;start++){
        for(int end=start;end<n;end++){
        int sum=0;
            for(int i=start;i<=end;i++){
                   sum=sum+arr[i];
            }
            cout<<"sum="<<sum<<endl;
            if(sum>maxsum){
                maxsum=sum;
            }
        }
    }
    cout<<"maximum subarray sum="<<maxsum<<endl;
}


int main(){
    int arr[]={3,-6,5,-7,8,-45};
    int n=sizeof(arr)/sizeof(int);
     subarray(n,arr);
     return 0;
}