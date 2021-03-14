#include <iostream>
#include <unordered_map>

using namespace std;

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, int> num_map;
        for (int i = 0; i < nums.size(); i++) {
            if (num_map.count(nums[i]) && (i - num_map[nums[i]]) <= k) {
                return true;
            }
            else {
                num_map[nums[i]] = i;
            }
        }
        return false;
    }
};

int main()
{
    Solution s;
    vector<int> num = { 1, 2, 3, 1 };
    cout << s.containsNearbyDuplicate(num, 3);
}

