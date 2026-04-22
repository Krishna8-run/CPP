// #include <iostream>
// using namespace std;
// int main(){
//     int num,count=0;
//     cout<<"enter number:";
//     cin>>num;
//     if(num==1){
//         cout<<"neither prime nor composite";
//     }
//     else{
//         for(int i=2;i<=num;i++){
//             if(num%i==0){
//               count++;
//             }
//         }
//         if(count==0||count==1){
//             cout<<"prime number";
//         }
//         else{
//             cout<<"not a prime number";
//         }
//     }
// }




#include <iostream>
using namespace std;
int main(){
    int n=9;
    bool isprime=true;
    for(int i=2;i<=n-1;i++){
        if(n%i==0){
            isprime=false;
        }
    }
    if(isprime){
        cout<<n<<" is prime number."<<endl;
    }
    else{
        cout<<n<<" Is not a prime number.";
    }
}
