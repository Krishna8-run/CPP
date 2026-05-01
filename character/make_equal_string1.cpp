#include <iostream>
#include <string>   
using namespace std;
bool are_string_equal(string &s1,string  &s2){
     int diffs1=-1,diffs2=-1;
    if(s1.length()!=s2.length()){
        return false;
    }
    else {
        for (int i=0;i<s1.length();i++){
            if(s1[i]!=s2[i]){
               
          if(diffs1==-1){
            diffs1=i;
          }
          else if(diffs2==-1){
            diffs2=i;
               }
          else{
            return false;
          }
             
            }
        }
    }
    // If there are no differences, the strings are already equal
    if(diffs1==-1){
        return true;
    }
    // If there is only one difference, the strings cannot be made equal by swapping
    if(diffs2==-1){
        return false;
    }
    // Swap the characters at the two different positions in s1
    // swap(s1[diffs1],s1[diffs2]);                
    // if(s1==s2){
    //     return true;
    // }
    return(s1[diffs1]==s2[diffs2] && s1[diffs2]==s2[diffs1]);
    
}
int main(){
    string str1,str2;
    cout<<"Enter the first string: ";
    cin>>str1;  
    cout<<"Enter the second string: ";
    cin>>str2;
  if (are_string_equal(str1, str2)) {
        cout << "Strings are almost equal";
    } else {
        cout << "Strings are not almost equal";
    }
    return 0;
}