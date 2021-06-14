#include <iostream>
#include <vector>
#include <stack>

using namespace std;

class Solution {
public:
    bool check(vector<int>& nums) {
        bool end = false;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > nums[(i + 1) % nums.size()] && !end) {
                end = true;
            }
            else if (nums[i] > nums[(i + 1) % nums.size()] && end) {
                return false;
            }
        }
        return true;
    }
};

int main()
{
    Solution s;
    vector<int> nums = { 2,1,3,4 };
    cout << s.check(nums) << endl;
    vector<int> nums2 = { 3,4,5,1,2 };
    cout << s.check(nums2) << endl;
    /* vector<bool> result;
     vector<int> nums = { 8,1,2,2,3 };
     result = s.intToRoman(nums);
     for (double r : result) {
         cout << r << endl;
     }*/
}