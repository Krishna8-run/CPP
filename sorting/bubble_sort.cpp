// #include <iostream>
// using namespace std;
// void bubble_Sort(int *arr,int n){
//     for(int i=1;i<n;i++){
//         for(int j=0;j<n-i;j++){
//            if(arr[j]>arr[j+1]){
//             swap(arr[j],arr[j+1]);
//            }
//         }
//     }
//     cout<<"[";
//     for(int k=0;k<n;k++){
//     cout<<arr[k];
//     if(k<n-1){
//         cout<<",";
//     }
//     }
//     cout<<"]";
// }
// int main(){
//     int arr[]={5,4,1,3,2,-9,7,2,5,0,-8,-3};
//     int n=sizeof(arr)/sizeof(int);
//     bubble_Sort(arr,n);
//     return 0;
// }


#include <iostream>
using namespace std;

void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl; 
}
void bubble_Sort(int *arr,int n){
     bool isSwap=false;
    for(int i=1;i<n;i++){
        for(int j=0;j<n-i;j++){
           if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
            isSwap=true;
            cout<<"true"<<endl;
           }
           cout<<"true1"<<endl;
        }
        if(!isSwap){
            //array is already sorted
            cout<<"false";
            return;
        }
    }
    print(arr,n);
}
int main(){
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(int);
    bubble_Sort(arr,n);
    return 0;
}