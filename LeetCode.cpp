#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) {
            return 0;
        }
        for (int i = 0; i < nums.size() - 1;) {
            if (nums[i] == nums[i + 1]) {
                nums.erase(nums.begin() + i + 1);
            }
            else {
                i++;
            }
        }
        return nums.size();
    }
};

int main()
{
    Solution s;
    vector<int> nums = { 0,0,1,1,1,2,2,3,3,4 };
    s.removeDuplicates(nums);
}

