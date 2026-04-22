#include <iostream>
using namespace std;
void spiral_matrix(int array[][4],int n){

}
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
    spiral_matrix(array,3);
}