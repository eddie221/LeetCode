#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        if (nums.empty()) {
            return {};
        }
        vector<string> result;
        long long i_start = 0;

        for (long long i = 0; i < nums.size() - 1; i++) {
            if (nums[i + 1] != nums[i_start] + i + 1 - i_start) {

                if (i + 1 - i_start == 1) {
                    result.push_back(to_string(nums[i_start]));
                }
                else {
                    result.push_back(to_string(nums[i_start]) + "->" + to_string(nums[i]));
                }
                i_start = i + 1;
            }
        }
        if (nums.size() - i_start == 1) {
            result.push_back(to_string(nums[i_start]));
        }
        else {
            result.push_back(to_string(nums[i_start]) + "->" + to_string(nums[nums.size() - 1]));
        }
        return result;
    }
};

int main()
{
    Solution s;
    vector<int> nums = { 0,1,2,4,5,7 };
    s.summaryRanges(nums);
}

