//with extra space
// #include <iostream>
// using namespace std;
// int main(){
//     int arr[]={7,4,2,34,56,7,8};
//     int n=sizeof(arr)/sizeof(int);
    
//     int copyarr[n];
//     for(int i=n-1;i>=0;i--){
//         int j=(n-1)-i;
//         copyarr[j]=arr[i];
//     }
//     for(int i=0;i<n;i++){
//         cout<<copyarr[i]<<endl;
//     }
// }


//without extra space(2 pointer approach)
// #include <iostream>
// using namespace std;
// void printarr(int *arr,int n){
//      for(int i=0;i<n;i++){
//         cout<<arr[i]<<endl;
//      }
// }
// int main(){
//     int arr[]={7,4,2,34,56,7,8};
//     int n=sizeof(arr)/sizeof(int);

//     int start=0, end=n-1;
//     while(start<end){
//         swap(arr[start],arr[end]);
//         start++;
//         end--;
//     }
//     printarr(arr,n);
//     return 0;
// }


//without extraspace(2 pointer approach)
#include <iostream>
using namespace std;
void printarr(int *arr,int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
}
int main(){
    int arr[]={7,4,2,34,56,8};
    int n=sizeof(arr)/sizeof(int);
    int start=0,end=n-1;

    while(end>=start){
        int temp=arr[end];
        arr[end]=arr[start];
        arr[start]=temp;
        start++;
        end--;
    }
    printarr(arr,n);
    return 0;
}
