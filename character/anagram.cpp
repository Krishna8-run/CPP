// #include <iostream>
// #include <algorithm>
// #include <string>
// using namespace std;

// void anagram(string s1,string s2)
// {
//     if (s1.length()!=s2.length())
//     {
//         cout<<"Not anagram";
//         return ;
//     }
//     else{
       
//         for(int i=0;i<s1.length();i++){
//             int c=count(s1.begin(),s1.end(),s1[i]);
//             int d=count(s2.begin(),s2.end(),s1[i]);
//           if(c!=d){
//                 cout<<"Not anagram";
//                 return;
//             }
//         }
//         cout<<"Anagram";
//     }
// }
// using namespace std;
// int main(){
//     string str1="listen";
//    string str2="silent";
//    anagram(str1,str2);
//     return 0;
// }

#include <iostream>
#include <algorithm>    
#include <string>
using namespace std;    

int main(){
    string str1="listen";
    string str2="silent";
    sort(str1.begin(),str1.end());
    sort(str2.begin(),str2.end());
    if(str1==str2){
        cout<<"Anagram";
    }
    else{
        cout<<"Not anagram";
    }
    return 0;
}