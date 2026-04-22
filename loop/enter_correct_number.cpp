#include <iostream>
using namespace std;
// int main(){
//     int num;
//     cout<<"enter number:";
//     cin>>num;
//     while(num%10!=0){
//         cout<<"enter number again:";
//         cin>>num;
//         if(num%10==0){
//             cout<<"right number"<<endl;
//             break;
//         }
//     }
// }

int main(){
    int n;
    do{
        cout<<"enter number:";
        cin>>n;
        if(n%10==0){
            cout<<"right number"<<endl;
            break;
        }
    }while(true);
}