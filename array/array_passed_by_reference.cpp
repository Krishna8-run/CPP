// #include <iostream>
// using namespace std;
// int main(){
//    int a=5;
//    int *ptr=&a;
//    cout<<ptr<<endl;
   
//    int arr[]={5,3,9,0,7};
//    int n=sizeof(arr)/sizeof(int);
//    cout<<*arr<<endl;
//    cout<<*(arr+1)<<endl;
//    cout<<*(arr+2)<<endl;
//    return 0;

// }


// #include <iostream>
// using namespace std;
// void func(int arr[]){
//     arr[0]=1000;
// }
// int main(){
//     int a=5;
//    int *ptr=&a;
//    cout<<ptr<<endl;
   
//    int arr[]={5,3,9,0,7};
//    int n=sizeof(arr)/sizeof(int);
//    func(arr);//passing array is equivalent to passing the pointer
//    cout<<"after change "<<arr[0];
//    return 0;

    
// }


#include <iostream>
using namespace std;
void printarr(int array[],int nums){
    cout<<"size of array[]=size of pointer as array is passed by reference="<<sizeof(array)<<endl;//
    for(int i=0;i<nums;i++){
        cout<<array[i]<<endl;
    }
}
int main(){
    int arr[]={5,55,6,3,56};
    int n=sizeof(arr)/sizeof(int);
    int a=4;
    int *ptr=&a;
    cout<<"size of pointer="<<sizeof(ptr)<<endl;
    cout<<"array size = "<<sizeof(arr)<<endl;//20
    printarr(arr,n);

}