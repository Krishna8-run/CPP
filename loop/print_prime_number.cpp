// #include <iostream>
// using namespace std;
// int main(){
//     int n,num,i,count=0;
//     cout<<"enter number:";
//     cin>>num;
//     n=2;
//     while(n<=num){
//     count=0;
//     for( i=1;i<=n;i++){
//         if(n%i==0){
//             count++;
//         }
//     }
//             if(count==2){
//                 cout<<n<<",";
//             }
//             n=n+1;
//         }
//         return 0;
//     }     
    
    
#include <iostream>
using namespace std;
int main(){
    int n=12,num=2;
    
    while(num<=n){
        bool isprime=true;
    for(int i=2;i<num-1;i++){
        if(num%i==0){
            isprime=false;
        }
    }
    if(isprime){
        cout<<num<<",";
    }
    num=num+1;
    
}
}