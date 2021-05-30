#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> result;
        sort(nums.begin(), nums.end());

        for (int i = 0; i < nums.size(); i++) {
            cout << nums[i] << endl;
        }

        for (int i = 0; i < nums.size(); i++) {
            if (i != 0 && nums[i] == nums[i - 1]) {
                continue;
            }
            int left = i + 1, right = nums.size() - 1;
            while (left < right) {
                if (nums[i] + nums[left] + nums[right] == 0) {
                    result.push_back({ nums[i] , nums[left], nums[right] });
                    while (left < right && nums[left + 1] == nums[left]) {
                        left++;
                    }
                    left++;
                    while (left < right && nums[right - 1] == nums[right]) {
                        right--;
                    }
                    right--;
                }
                else if (nums[i] + nums[left] + nums[right] > 0) {
                    right--;
                }
                else {
                    left++;
                }
                
            }
        }

        return result;
    }
};

int main()
{
    Solution s;
    vector<int> nums = { -1,0,1,2,-1,-4 };
    vector<vector<int>> r = s.threeSum(nums);
    for (int i = 0; i < r.size(); i++) {
        for (int j = 0; j < r[i].size(); j++) {
            cout << r[i][j] << " ";
        }
        cout << endl;
    }
    /* vector<bool> result;
     vector<int> nums = { 8,1,2,2,3 };
     result = s.intToRoman(nums);
     for (double r : result) {
         cout << r << endl;
     }*/
}