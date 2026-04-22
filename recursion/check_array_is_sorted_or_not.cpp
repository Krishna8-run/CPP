#include <iostream>
using namespace std;
bool isSorted(int arr[],int n,int i){
    if(i==n-1){
        return true;
    }

    if(arr[i]>arr[i+1]){
        return false;
    }
    return isSorted(arr,n,i+1);
}
int main(){
    int arr1[]={8,9,90,167,450};
    int arr2[]={9,90,78,8,90};
    cout<<isSorted(arr1,5,0)<<endl;
    cout<<isSorted(arr2,5,0)<<endl;

    return 0;

}