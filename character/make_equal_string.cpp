#include <iostream>
#include <string>
using namespace std;

bool areAlmostEqual(string s1,string s2)
{
    if(s1.length()!=s2.length()){
        return false;

    }
    char diffchar1,diffchar2;
    int diff=0;
    for(int i=0;i<s1.length();i++){
        if(s1[i]!=s2[i]){
            if (!diff){
                diffchar1=s1[i];
                diffchar2=s2[i];

            }
            else
            {
                if(s1[i]!=diffchar2 || s2[i]!=diffchar1){
                    return false;
                }
            }
            diff++;
        }
        if(diff>2){
            return false;
        }
    }
    if(diff==1){
        return false;
    }
    return true;

}
int main(){
    string str1,str2;
    cout<<"Enter the first string: ";
    cin>>str1;
    cout<<"Enter the second string: ";
    cin>>str2;
    if(areAlmostEqual(str1,str2)){
        cout<<"The strings are almost equal.";
    }
    else{
        cout<<"The strings are not almost equal.";
    }
    return 0;
}
