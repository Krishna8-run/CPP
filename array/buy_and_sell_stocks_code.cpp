//time complexity o(n square)
// #include <iostream>
// using namespace std;
// void stock(int *arr,int n){
//     int profit=0;
//     int maxprofit=0;
//     for(int buy=0;buy<n;buy++){
//         for(int sell=buy+1;sell<n;sell++){
//             profit=arr[sell]-arr[buy];
//             maxprofit=max(profit,maxprofit);
//         }
//     }
//     cout<<"maximum profit="<<maxprofit<<endl;
// }
// int main(){
//     int arr[]={7,1,5,3,6,4};
//     int n=sizeof(arr)/sizeof(int);
//     stock(arr,n);
// }

//time complexity o(n)
#include <iostream>
#include <climits>
using namespace std;
 void maxProfit(int *arr,int n){
    int bestBuy[100000];
    bestBuy[0]=INT_MAX;
    for(int i=1;i<n;i++){
        bestBuy[i]=min(bestBuy[i-1],arr[i-1]);
    }
    
    int maxProfit=0;
    for(int i=0;i<n;i++){
        int currProfit=arr[i]-bestBuy[i];
        maxProfit=max(maxProfit,currProfit);
        cout<<maxProfit<<endl;
    }
    cout<<"max profit="<<maxProfit<<endl;
}
int main(){
    int arr[]={7,1,5,3,6,4};
    int n=sizeof(arr)/sizeof(int);
    maxProfit(arr,n);
    return 0;
}