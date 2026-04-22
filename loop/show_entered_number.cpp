#include <iostream>
using namespace std;
int main(){
    int n;
    do{
        cout<<"enter number"<<endl;
        cin>>n;
        if(n%10==0){
            continue;
        }
        cout<<"u entered:"<<n<<endl;
    }while(true);
    return 0;
}