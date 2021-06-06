#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> r = {0, 0};
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); i++) {
            if (i + 1 < nums.size() && nums[i] == nums[i + 1]) {
                r[0] = nums[i];
                nums.erase(nums.begin() + i);
                break;
            }
        }
        if (r[0] == 0) {
            r[0] = nums[nums.size() - 1];
            nums.erase(nums.end() - 1);
        }
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != i + 1) {
                r[1] = i + 1;
                break;
            }
        }
        if (r[1] == 0) {
            r[1] = nums.size() + 1;
        }
        return r;
    }
};

int main()
{
    Solution s;
    vector<int> nums = {3, 2, 2};
    vector<int> result = s.findErrorNums(nums);
    cout << result[0] << " " << result[1];
    /* vector<bool> result;
     vector<int> nums = { 8,1,2,2,3 };
     result = s.intToRoman(nums);
     for (double r : result) {
         cout << r << endl;
     }*/
}