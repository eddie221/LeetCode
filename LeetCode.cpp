#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        vector<int> result;
        result.push_back(nums[0]);
        for (int i = 1; i < nums.size(); i++) {
            result.insert(result.begin() + index[i], nums[i]);
        }
        return result;
    }
};

int main()
{
    Solution s;
    vector<int> nums = { 0, 1, 2, 3, 4 };
    vector<int> index = { 0 ,1, 2, 2, 1 };
    vector<int> r = s.createTargetArray(nums, index);
    for (int i = 0; i < r.size(); i++) {
        cout << r[i] << endl;
    }
    /* vector<bool> result;
     vector<int> nums = { 8,1,2,2,3 };
     result = s.intToRoman(nums);
     for (double r : result) {
         cout << r << endl;
     }*/
}