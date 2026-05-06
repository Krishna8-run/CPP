#include <iostream>
using namespace std;
void func(int matrix[][4]){
   cout<<matrix<<endl;
   cout<<*matrix<<endl;     
   cout<<**matrix<<endl;
   cout<<*(matrix+1)<<endl;
   cout<<*(matrix+2)<<endl;       
}
void func2(int (*matrix)[4]){
         cout<<matrix<<endl;
   cout<<*matrix<<endl;     
   cout<<**matrix<<endl;
   cout<<*(matrix+1)<<endl;
   cout<<*(matrix+2)<<endl; 
   cout<<*(*(matrix+1)+2)<<endl;
}
int main(){
       int matrix[4][4]={{10,20,30,40},
                     {15,25,35,45},
                     {27,29,37,48},
                     {32,33,39,50}};

cout<<matrix<<"="<<&matrix[0][0]<<endl;
cout<<matrix<<"!="<<&matrix[0][1]<<endl;
cout<<matrix+1<<endl;
cout<<matrix+3<<endl;
cout<<matrix+6<<endl;
cout<<matrix[0]<<endl;
cout<<matrix[0][0]<<endl;
func(matrix);
func2(matrix);

return 0;
        
}