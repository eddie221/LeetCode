#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int good_pair = 0;
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                if (nums[i] == nums[j]) {
                    good_pair++;
                }
            }
        }
        return good_pair;
    }
};

int main()
{
    Solution s;
    vector<int> nums = { 1,2,3,1,1,3 };
    cout << s.numIdenticalPairs(nums);
}

