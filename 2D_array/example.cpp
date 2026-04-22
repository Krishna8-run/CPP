#include <iostream>
using namespace std;
int main(){
    int array[3][4]={{100,89,90,20},
                      {50,25,36,83},
                     {12,13,14,47}};
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<array[i][j]<<endl;
        }
    }
}