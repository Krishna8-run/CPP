#include <iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"enter array row and column ";
    cin>>n>>m;
 int array[3][4];
 cout<<"enter array vlaue"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>array[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<array[i][j]<<" ";
        }
        cout<<endl;
    }

}