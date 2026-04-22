#include <iostream>
#include <climits>
using namespace std;
void trap(long long *height,int n){
    long long leftMax[2000],rightMax[2000];
    leftMax[0]=LLONG_MIN;
    rightMax[n-1]=LLONG_MIN;
     cout<<leftMax[0]<<",";
    for(int i=1;i<n;i++){
        leftMax[i]=max(leftMax[i-1],height[i-1]);
         cout<<leftMax[i]<<",";
    }
    cout<<endl;
    cout<<rightMax[n-1]<<",";
    for(int i=n-2;i>=0;i--){
        rightMax[i]=max(rightMax[i+1],height[i+1]);
       cout<<rightMax[i]<<",";
    }
    
     cout<<endl;
      long long storeWater=0;
     for(int i=0;i<n;i++){
       long  currWater=min(rightMax[i],leftMax[i])-height[i];
        if(currWater>0){
           storeWater += currWater;
           cout<<storeWater<<",";
        }
     } 
    cout <<endl;
     cout<<"stored water="<<storeWater;  
}
int main(){
    long long height[]={4,2,0,6,3,2,5};
    int n=sizeof(height)/sizeof(long long);
    trap(height,n);
    return 0;
}

// #include <iostream>
// using namespace std;
// int trap(int *heights,int n){
//     int LeftMax[2000],rightMax[2000];
//     LeftMax[0]=heights[0];
//     rightMax[n-1]=heights[n-1];

//     for(int i=1;i<n;i++){
//         LeftMax[i]=max(LeftMax[i-1],heights[i-1]);
//     }

//     for(int i=n-2;i>=0;i--){
//         rightMax[i]=max(rightMax[i+1],heights[i+1]);
//     }

//     int waterTrapped=0;
//     for(int i=0;i<n;i++){
//         int currWater=min(LeftMax[i],rightMax[i])-heights[i];
//         if(currWater>0){
//             waterTrapped +=currWater;
//         }
//     }
//     cout<<"water trapped="<<waterTrapped<<endl;
// }
// int main(){
//     int heights[7]={4,2,0,6,3,2,5};
//     int n=sizeof(heights)/sizeof(int);
//     trap(heights,n);
//     return 0;
// }