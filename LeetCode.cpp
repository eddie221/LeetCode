#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        for (int i = 0; i < nums.size();) {
            if (nums[i] == val) {
                nums.erase(nums.begin() + i);
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
    vector<int> nums = { 3,2,2,3 };
    s.removeElement(nums, 3);
}

