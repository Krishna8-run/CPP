#include <iostream>
#include <vector>
using namespace std;

void practice(){
    cout<<"practice"<<endl;
    vector<int> vec2={1,2,3,4,5,6,7,8};
    cout<<vec2.size()<<endl;
    for(int i=0;i<vec2.size();i++){
        cout<<vec2[i]<<" ";
    }
    cout<<endl;
}

void practice1(){
    cout<<"practice1"<<endl;
    vector<int>vec3(5,-2);
    cout<<vec3.size()<<endl;
    for(int i=0;i<vec3.size();i++){
        cout<<vec3[i]<<" ";
    }
    cout<<endl;
}

int main(){
    vector<int> vec1={};
    cout<<vec1.size()<<endl;
    practice();
    practice1();
    return 0;
}