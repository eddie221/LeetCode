#include <iostream>
#include <vector>
#include <float.h>
#include <algorithm>

using namespace std;

class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int max_idx = 0;
        for (int i = 1; i < nums.size(); i++) {
            if (nums[max_idx] < nums[i]) {
                max_idx = i;
            }
        }
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] * 2 > nums[max_idx] && max_idx != i) {
                return -1;
            }
        }
        return max_idx;
    }
};

int main()
{
    Solution s;
    vector<int> nums = { 3,6,1,0 };
    cout << s.dominantIndex(nums) << endl;
    /* vector<bool> result;
     vector<int> nums = { 8,1,2,2,3 };
     result = s.intToRoman(nums);
     for (double r : result) {
         cout << r << endl;
     }*/
}