// #include <iostream>
// using namespace std;
// int main(){
//     int arr[]={20,13,40,51,6,17,8};
//     int n=sizeof(arr)/sizeof(int);
//     int max=arr[0];
//     for(int i=0;i<n;i++){
//         if(arr[i]>=max){
//             max=arr[i];
//         }
//     }
//            cout<<"maximum value="<<max;
// }


#include <iostream>
using namespace std;
int main(){
    int arr[]={2,4,3,95,65,67,87,90};
    int n=sizeof(arr)/sizeof(int);
     
    int max= arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    cout<<"maximum no. is "<<max<<endl;
    return 0;
}