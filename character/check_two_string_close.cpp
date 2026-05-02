#include <iostream>
#include <algorithm>
using namespace std;

bool isClose(string word1,string word2){
    int freq1[26]={0};
    int freq2[26]={0};   
    if(word1.length()!=word2.length()){
        return false;
    }
    else{
// Count the frequency of characters in strings example: "cabbba" will have freq1[0]=2, freq1[1]=3, freq1[2]=1 and rest will be 0
        for(char c:word1){
            freq1[c-'a']++;
        }
        for(char c:word2){
            freq2[c-'a']++;
        }
        // Check if the frequency of characters is the same in both strings
        for(int i=0;i<26;i++){
            if((freq1[i]==0) != (freq2[i]==0))
               return false;
        }
//arranging the frequency of characters in ascending order to compare the frequency of characters in both strings
        sort(freq1,freq1+26);
        sort(freq2,freq2+26);
        for (int i = 0; i < 26; i++) {
            if (freq1[i] != freq2[i]) {
                return false;
            }
        }
        return true;
    }

};
int main (){
 string word1,word2;
 cout<<"Enter the first string: ";
 cin>>word1;       
    cout<<"Enter the second string: ";
    cin>>word2;
    if(isClose(word1,word2)){
        cout<<"The two strings are equal";
    }
    else{
        cout<<"The two strings are not equal";
    }
    return 0;
}