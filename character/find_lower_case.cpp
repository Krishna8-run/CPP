#include <iostream>
using namespace std;
void find_lower_case(string str){
    int count=0;
    for(int i=0;i<str.length();i++){
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u'){
        count++;
        }
    }
    cout<<"Number of lower case vowels: "<<count<<endl;
}
int main(){
    string str;
    cout<<"Enter the string: ";
    cin>>str;
     find_lower_case( str);
}