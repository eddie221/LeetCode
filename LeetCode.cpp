#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> result;
        for (int i = 0; i < nums.size() / 2; i++) {
            result.push_back(nums[i]);
            result.push_back(nums[i + n]);
        }
        return result;
    }
};
int main()
{
    Solution s;
    vector<int> nums = { 1,2,3,4,4,3,2,1 };
    s.shuffle(nums, 4);
}

