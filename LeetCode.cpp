#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int low_idx = 0, high_idx = nums.size();
        while (low_idx < high_idx) {
            int mid = (low_idx + high_idx) >> 1;
            if (nums[mid] < target) {
                low_idx = mid + 1;
            }
            else {
                high_idx = mid;
            }
        }
        return low_idx;
    }
};

int main()
{
    Solution s;
    vector<int> nums = { 1,3,5,6 };
    cout << s.searchInsert(nums, 5);
}

