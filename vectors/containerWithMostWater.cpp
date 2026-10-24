#include <iostream>
#include <vector>
using namespace std;

int maxArea(vector<int> height){
    int Lptr=0;
    int Rptr=height.size()-1;
    int maxArea=0;
    while(Lptr<Rptr){
        int area=min(height[Lptr],height[Rptr])*(Rptr-Lptr);
        maxArea=max(maxArea,area);
        if(height[Lptr]<height[Rptr]){
            Lptr++;
        }
        else{
            Rptr--;
        }
    }
    return maxArea;
};

int main (){
    vector<int> height={1,8,6,2,5,4,8,3,7};
    cout<<"Container with most water: "<<maxArea(height)<<endl;
    return 0;
}