#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    bool canBeIncreasing(vector<int>& nums) {
        bool eliminate = false;
        int previous = nums[0];

        for (int i = 1; i < nums.size(); i++) {
            if (previous >= nums[i]) {
                if (eliminate) {
                    return false;
                }
                eliminate = true;
                if (i == 1 || nums[i - 2] < nums[i]) {
                    previous = nums[i];
                }
            }
            else {
                previous = nums[i];
            }
        }
        return true;
    }
};

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    Solution s;
    //vector<int> nums = { 105,924,32,968};
    vector<int> nums = { 2, 3, 1, 2 };
    cout << s.canBeIncreasing(nums);


    return 0;
}
