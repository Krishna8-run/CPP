// // #include <iostream>
// // using namespace std;
// // int main(){
// //     string x="12";
// //     string *ptr=&x;
// //     cout<<&ptr<<endl;//address of pointer
// //     cout<<ptr<<endl;//address of value x
// //     cout<<*ptr<<endl;    //value of x    
// // }


// #include <iostream>
// using namespace std;
// int main(){
//     float x=12;
//     float *ptr=&x;
//     cout<<&ptr<<endl;//address of pointer
//     cout<<ptr<<endl;//address of value x
//     cout<<*ptr<<endl;    //value of x    
// }


// #include <iostream>
// using namespace std;
// int main(){
//     char x='$';
//     char *ptr=&x;
//     cout<<&ptr<<endl;//address of pointer
//     cout<<(void*)ptr<<endl;//address of value x
//     cout<<*ptr<<endl;    //value of x    
// }


// #include <iostream>
// using namespace std;
// int main(){
//     int x=12;
//     int *ptr=&x;
//     cout<<&ptr<<endl;//address of pointer
//     cout<<ptr<<endl;//address of value x
//     cout<<*ptr<<endl;    //value of x    
// }

#include <iostream>
using namespace std;
int main(){
    char x='$';
    void *ptr=&x;
    cout<<&ptr<<endl;//address of pointer
    cout<<ptr<<endl;//address of value x
    // cout<<*ptr<<endl;    //invalid as ptr is void data type so it does not return value  
}