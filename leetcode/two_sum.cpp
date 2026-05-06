// #include <iostream>
// using namespace std;
// void two_sum(int *arr,int target,int size){
//     int complement =0;
//     for(int i=0;i<size;i++){
//         for(int j=i+1;j<size;j++){
//             // complement=target-arr[i];
//             // if(complement==arr[j]){
//             //     cout<<"["<<i<<","<<j<<"]";
//             //     return;
//             // }

//             if(arr[i]+arr[j]==target){
//                 cout<<"["<<i<<","<<j<<"]";
//                 return;
//             }
//         }
//     }
// }
// int main (){
//     int target=6;
//     int arr[]={3,3};
//     int size=sizeof(arr)/sizeof(int);
//     two_sum(arr,target,size);
//     return 0;
// }

#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       for(int i=0;i<nums.size();i++){
        for(int j=i+1;j<nums.size();j++){
            // complement=target-arr[i];
            // if(complement==arr[j]){
            //     cout<<"["<<i<<","<<j<<"]";
            //     return;
            // }

            if(nums[i]+nums[j]==target){
                return{i,j};
            }
        }
      }
      return{}; 
    }
};
int main (){
    int target=6;
    vector<int> nums={3,3};
    Solution sol;
    vector<int> result=sol.twoSum(nums,target);
    // “Take each element from result one by one and store it in i”
    for(int i:result){
        std::cout<<i<<" ";
    }
    return 0;
}