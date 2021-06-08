#include <iostream>
#include <vector>
#include <float.h>
#include <algorithm>

using namespace std;

class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int sum = 0;
        for (int i = 0; i < k; i++) {
            sum += nums[i];
        }
        double result = double(sum) / double(k);
        for (int i = k; i < nums.size(); i++) {
            sum = sum - nums[i - k] + nums[i];
            result = max(result, double(sum) / double(k));
        }
        return result;
    }
};

int main()
{
    Solution s;
    vector<int> nums = {4, 2, 1, 3, 3};
    cout << s.findMaxAverage(nums, 2) << endl;
    /* vector<bool> result;
     vector<int> nums = { 8,1,2,2,3 };
     result = s.intToRoman(nums);
     for (double r : result) {
         cout << r << endl;
     }*/
}