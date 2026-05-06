#include <iostream>
using namespace std;
bool search(int matrix[][4],int n,int m){
    int target=29;
    int row=0, col=m-1;

    while(row<n && col>=0){
        if(matrix[row][col]==target){
            cout<<"found at index: ["<<row<<"]["<<col<<"]";
            return true;
        }
        else if(matrix[row][col]>target){
            col--;
        }
        else{
            row++;
        }
    }
    cout<<"not found";
    return false;
}
int main(){
   int matrix[4][4]={{10,20,30,40},
                     {15,25,35,45},
                     {27,29,37,48},
                     {32,33,39,50}};
    search(matrix,4,4);
    return 0;
}