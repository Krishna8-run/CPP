#include <iostream>
#include <vector>
using namespace std;

int lastOccurence(vector<int> nums){
    int target=3;
    int n=nums.size()-1;
    for(int i=n;i>=0;i--){
         if(target==nums[i]) 
       return i+1;

    }
    return -1;
}

int main(){
    vector<int> nums={3,2,53,3,3,3,4};
    cout<<"Last occurence of 3 is at " <<lastOccurence(nums)<<" index.";
    return 0;
}