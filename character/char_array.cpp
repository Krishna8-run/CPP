#include <iostream>
using namespace std;
int main(){
    char arr[5]={'c','o','d','1',};
    char arr2[5]={'c','o','d','2','\0'};
    char arr3[5]={'c','o','d','e','3'};
    char arr4[5]={'c','\0','d','e','\0'};
    char arr5[]="hello world";//string literal
    cout<<arr<<endl;
    cout<<arr2<<endl;
    cout<<arr3<<endl;
    cout<<arr4<<endl;
    cout<<arr5<<endl;               
    
    return 0;
}