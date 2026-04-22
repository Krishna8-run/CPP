// #include <iostream>
// #include <string>
// using namespace std;
// void dectobin(int a){
//     string bin="";
//     while(a!=0){
//     int rem;
//     rem=a%2;
//     bin=to_string(rem)+bin;
//     a=a/2;
//     }
//     cout<<bin;
// }
// int main(){
//     int n=8;
//     dectobin(n);
//     return 0;
// }


#include <iostream>
using namespace std;
void dectobin(int a){
    int pow=1;
    int bin=0;
    while(a!=0){
        int rem=a%2;
         bin=bin+(rem*pow);
        a=a/2;
        pow=pow*10;
    }
    cout<<bin;
}
int main(){
    int n=4;
    dectobin(n);
}