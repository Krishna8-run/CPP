#include <iostream>
using namespace std;
void spiral_matrix(int n,int m,int array[][100]){
    
    int srow=0, scol=0, erow=n-1, ecol=m-1;
 while(srow<=erow && scol<=ecol){
    //top row
    for(int i=scol;i<=ecol;i++){
        cout<<array[srow][i]<<" ";
    };
    //right column
    for(int j=srow+1;j<=erow;j++){
        cout<<array[j][ecol]<<" ";
    }
    //bottom row
    for(int i=ecol-1;i>=scol;i--){
        if(srow==erow){
            break;
        }
        cout<<array[erow][i]<<" ";
    }
    //left column
    for(int j=erow-1;j>srow;j--){
        if(scol==ecol){
            break;
        }
        cout<<array[j][scol]<<" ";
    }
    srow++;
    scol++;
    erow--;
    ecol--;
 }
      
}
int main(){
 int n,m;
 cout<<"enter array row and column ";
 cin>>n>>m;
 int array[100][100];
 cout<<"enter array vlaue"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>array[i][j];
        }
    }  
    spiral_matrix(n,m,array);
    return 0;
}