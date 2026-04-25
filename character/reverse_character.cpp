#include <iostream>
#include <cstring>
using namespace std;
int main(){
    char arr[]="hello world";
    char *start =&arr[0];
    char *end=&arr[strlen(arr)-1];
    while(start<=end){
        char temp=*start;
        *start=*end;
        *end=temp;
        start++;
        end--;
    }
    cout<<arr;
    return 0;
}