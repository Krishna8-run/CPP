//occurence of element at which index for first time
#include <iostream>
#include <vector>
using namespace std;

int firstOccurence(vector<int> nums){
     int target=3;
     
  for(int i=0;i<nums.size();i++){
    if(target==nums[i]) 
       return i+1;
  };
  return -1;
}

int main(){
    vector<int> nums={1,2,5,3,3,3,4};
    cout<<"first occurence of 3 is at " <<firstOccurence(nums)<<" index.";
    return 0;
}