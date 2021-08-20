#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> result;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[abs(nums[i]) - 1] > 0) {
                nums[abs(nums[i]) - 1] = -nums[abs(nums[i]) - 1];
            }
            
        }
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > 0) {
                result.push_back(i + 1);
            }
        }
        return result;
    }
};

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    Solution s;
    vector<int> nums = { 4,3,2,7,8,2,3,1 };
    vector<int> r = s.findDisappearedNumbers(nums);
    for (auto x : r) {
        cout << x << endl;
    }
    return 0;
}
