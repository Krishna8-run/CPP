#include <iostream>
using namespace std;
int main(){
    int arr[]={4,5,2,7,9};
    int *ptr=&arr[];
    cout<<"address="<<ptr<<endl;
    int n=sizeof(arr)/sizeof(int);
    for(int i=0;i<n;i++){
        cout<<"value="<<*(ptr+i)<<endl;
    }

}