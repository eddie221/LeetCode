#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int thirdMax(vector<int>& nums) {
        if (nums.size() == 1) {
            return nums[0];
        }
        sort(nums.begin(), nums.end(), std::greater<int>());

        int count = 0, result;
        for (int i = 0; i < nums.size() - 1 && count < 2; i++) {
            if (nums[i] != nums[i + 1]) {
                result = nums[i + 1];
                count++;
            }
        }
        if (count != 2) {
            return nums[0];
        }
        return result;
    }
};

int main()
{
    Solution s;
    vector<int> nums = { 3, 2 ,1 };
    cout << s.thirdMax(nums);
}

