#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 1;
        int major = nums[0];
        for (int i = 1; i < nums.size(); i++) {
            if (count == 0) {
                major = nums[i];
            }
            if (major != nums[i]) {
                count -= 1;
            }
            else {
                count += 1;
            }
            
        }
        return major;
    }
};

int main()
{
    Solution s;
    vector<int> nums = { 2,2,1,1,1,2,2 };
    cout << s.majorityElement(nums);

    /* vector<bool> result;
     vector<int> nums = { 8,1,2,2,3 };
     result = s.intToRoman(nums);
     for (double r : result) {
         cout << r << endl;
     }*/
}