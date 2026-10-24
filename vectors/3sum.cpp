
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>> threeSum(vector<int> nums) {
    sort(nums.begin(), nums.end());

    vector<vector<int>> ans;
    int n = nums.size();

    for (int i = 0; i < n; i++) {
        if (i > 0 && nums[i] == nums[i - 1])
            continue;

        int Lptr = i + 1;
        int Rptr = n - 1;

        while (Lptr < Rptr) {
            int sum = nums[i] + nums[Lptr] + nums[Rptr];

            if (sum == 0) {
                ans.push_back({nums[i], nums[Lptr], nums[Rptr]});
                  Lptr++;
                Rptr--;
                while (Lptr < Rptr && nums[Lptr] == nums[Lptr + 1])
                    Lptr++;

                while (Lptr < Rptr && nums[Rptr] == nums[Rptr - 1])
                    Rptr--;

               
            }
            else if (sum < 0) {
                Lptr++;
            }
            else {
                Rptr--;
            }
        }
    }

    return ans;
}

int main() {
    vector<int> nums = {-3,-2,-2,2,1};
    vector<vector<int>> result = threeSum(nums);

    for (int i = 0; i < result.size(); i++) {
        for (int j = 0; j < result[i].size(); j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
