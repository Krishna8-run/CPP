// #include <iostream>
// using namespace std;
// void Linearsearch(int n){
//     int arr[5]={45,76,87,9,90};
// for(int i=0;i<6;i++){
//   if(arr[i]==n){
//     cout<<" the element "<<n<<" is at "<<i+1<<" position.";
//   }
// }
// }
// int main(){
//     int num;
//     cout<<"enter number to search:";
//     cin>>num;
//     Linearsearch(num);
// }



#include <iostream>
using namespace std;
void linearsearch(int *arr, int key,int n){
   for(int i=0;i<n;i++){
      if(arr[i]==key){
         cout<<"the number "<<key<<" is at "<<i+1<<" position"<<endl;
      }
   }
}
int main(){
   int  arr[]={56,90,89,76,8};
   int n=sizeof(arr)/sizeof(int);

   int key;
   cout<<"enter key to search in array"<<endl;
   cin>>key;
   linearsearch(arr,key,n);
   return 0;

}