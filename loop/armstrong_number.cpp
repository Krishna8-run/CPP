// #include <iostream>
// #include<cmath>
// using namespace std;
// int main(){
//     int num,count=0;
//     cout<<"enter number:";
//     cin>>num;
//     int num1=num;
//     int n=num;
//     int n2=0;
//     while(num>0){
//         num=num/10;
//         count++;
//     }
//     while(num1>0){
//         int digit1=num1%10;
//         num1=num1/10;
//          n2=pow(digit1,count)+n2;
//     }
//     if(n2==n){
//         cout<<"armstrong no."<<endl;
//     }
//     else{
//         cout<<"not a armstrong no."<<endl;
//     }
//     return 0;
// }



#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num, count = 0, sum = 0;
    cout << "Enter number: ";
    cin >> num;
    int temp = num;

    // Count digits
    for (int n = num; n > 0; n /= 10) count++;

    // Calculate Armstrong sum
    for (int n = num; n > 0; n /= 10)
        sum += pow(n % 10, count);

    cout << (sum == temp ? "Armstrong number." : "Not an Armstrong number.") << endl;
}
