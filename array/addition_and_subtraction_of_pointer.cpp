#include <iostream>
using namespace std;
int main(){
    int a=8;
    int f=90;
    int *ptr1=&a;
    int *ptr2=&f;
    cout<<"ptr1 address="<<ptr1<<endl;
    cout<<"ptr2 address="<<ptr2<<endl;
    cout<<"pointer difference="<<ptr1-ptr2<<endl;
    cout<<"pointer difference="<<ptr2-ptr1<<endl;

    int arr1[]={8,9,4,3,45,3};
    int arr2[]={7,9,0,5,78,90,8,7};
    int *ptr3=arr1;
    int *ptr4=arr2;
    cout<<"ptr3 address="<<ptr3<<endl;
    cout<<"ptr4 address="<<ptr4<<endl;
    cout<<"array pointer difference="<<ptr3-ptr4<<endl;

    //comparison pointer
    int arr[20]={3,2,4,5,31,12,34,56};
    int *ptr5=arr;
    int *ptr6=ptr5+3;
    cout<<"ptr5="<<ptr5<<endl;
    cout<<"ptr6="<<ptr6<<endl;
    cout<<(ptr5==arr)<<endl;
    cout<<(ptr5<ptr6)<<endl;
    cout<<(ptr6<ptr5)<<endl;

}