#include <iostream>
#include <cstring>
using namespace std;
int main(){
    char arr[]="rAm is A boY.";
    for(int i=0;i<strlen(arr);i++){
        if(arr[i]>= 'a'&& arr[i]<='z'){
            arr[i]=arr[i]-('a'-'A');
        }
        else{
            continue;
        }
    }
    cout<<arr;
    return 0;
}