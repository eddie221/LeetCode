#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> sorted_nums = nums;
        vector<int> result;
        sort(sorted_nums.begin(), sorted_nums.end());
        for (int i = 0; i < nums.size(); i++) {
            result.push_back(find(sorted_nums.begin(), sorted_nums.end(), nums[i]) - sorted_nums.begin());
        }
        return result;
    }
};

int main()
{
    Solution s;
    //s.smallerNumbersThanCurrent("27346209830709182346");
    /*while (r != nullptr) {
        cout << r->val << endl;
        r = r->next;
    }*/
    vector<int> result;
    vector<int> nums = { 8,1,2,2,3 };
    result = s.smallerNumbersThanCurrent(nums);
    for (double r : result) {
        cout << r << endl;
    }
}

