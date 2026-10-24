//brute force approach to find pair sum in vector  0(n^2)
// #include <iostream>
// #include <vector>
// using namespace std;

// void sumPair(vector<int> vec,int target){
//     for (int i=0;i<vec.size();i++){
//         for (int j=i+1;j<vec.size();j++){
//             if(vec[i]+vec[j]==target){
//                 cout<<"pair found: "<<vec[i]<<" "<<vec[j]<<endl;
//                 cout<<"index: "<<i<<" "<<j<<endl;
//             }
//         }
//     }
// }

// int main(){
//     vector<int> vec={2,4,5,7,11,15,};
//     int target=9;
//     sumPair(vec,target);
//     return 0;
// }

//optimized approach to find pair sum in vector O(n)
//two pointer approach
#include <iostream>
#include <vector>
using namespace std;

vector<int> sumPair(vector<int> vec,int target){
    int Lptr=0;
    int Rptr=vec.size()-1;
    vector <int> ans;
    while(Lptr<Rptr){
        int sum=vec[Lptr]+vec[Rptr];
        if(sum==target){
           ans.push_back(Lptr+1);
           ans.push_back(Rptr+1);
           return ans;
        }
        else if(sum<target){
            Lptr++;
        }
        else{
            Rptr--;
        }
    }
    return ans;
}

int main(){
    vector<int> vec={2,4,5,7,11,15,};
    int target=9;
    vector<int> ans=sumPair(vec,target);
    cout<<ans[0]<<" "<<ans[1]<<endl;
    return 0; 
}