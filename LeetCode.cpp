#include <iostream>
#include <vector>
#include <map>

using namespace std;

class Solution {
public:

    int minMoves(vector<int>& nums) {
        int sum = 0, min = nums[0], n = nums.size();
        for (int i = 0; i < n; i++) {
            if (min > nums[i]) {
                min = nums[i];
            }
            sum += nums[i];
        }
        return sum - min * n;
    }
};


int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    Solution s;
    vector<int> nums = { 1, 2, 100 };
    cout << s.minMoves(nums);
    return 0;
}
