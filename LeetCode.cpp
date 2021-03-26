#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int result = nums[0], tmp = nums[0];

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] > nums[i - 1]) {
                tmp += nums[i];
            }
            else {
                tmp = nums[i];
            }
            result = max(result, tmp);
        }
        return result;
    }
};

int main()
{
    Solution s;
    vector<int> nums = { 10,20,30,5,10,50 };
    cout << s.maxAscendingSum(nums);
}

