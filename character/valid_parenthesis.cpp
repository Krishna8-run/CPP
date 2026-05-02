#include <iostream>
#include <stack>
using namespace std;
bool isMatch(char a,char b){
   return((a=='(' && b==')') || (a=='{' && b=='}') || (a=='[' && b==']'));
}
bool isValid(string s){
    stack<char> st;
    for(int i=0;i<s.length();i++){
        if(s[i]=='(' || s[i]=='{' || s[i]=='['){
            st.push(s[i]);

        }
        else{
            if(st.empty()==true){
                return false;
            }
            else if(isMatch(st.top(),s[i]))
            {
                st.pop();
            }
            else{
                return false;
            }
        }

    }
    return (st.empty()==true);

}
int main(){
     string s;
    cout<<"Enter the string: "; 
    cin>>s;
    if(isValid(s)){
        cout<<"The string is valid";
    }
    else{
        cout<<"The string is not valid";
    }

}