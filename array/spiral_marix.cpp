#include <iostream>
using namespace std;
 const int n=4;
const int m=4;
void spiral_matrix(int arr[][4],int n,int m){
    int frow=0,lrow=n-1, fcol=0,lcol=m-1;
    while(frow<=lrow && fcol<=lcol){
        //top
        for(int j=fcol;j<=lcol;j++){
            cout<<arr[frow][j]<<" ";
        }

        //right
        for(int i=frow+1;i<=lrow;i++){
            cout<<arr[i][lcol]<<" ";
        }

        //bottom
        for(int j=lcol-1;j>=fcol;j--){
            if(frow==lrow){
                break;
            }
            cout<<arr[lrow][j]<<" ";
        }

        //left
        for(int i=lrow-1;i>=frow+1;i--){
            if(fcol==lcol){
                break;
            }
            cout<<arr[i][fcol]<<" ";
        }
        frow++;
        lrow--;
        fcol++;
        lcol--;

    }

}
int main(){
    int arr[n][m];
    cout<<"enter array value:";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
     spiral_matrix(arr,n,m);
     return 0;
}
