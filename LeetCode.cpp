#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        for (int i = 0; i < nums.size(); i++) {
            nums[i] = pow(nums[i], 2);
        }
        if (nums.size() != 0) {
            sort(nums.begin(), nums.end());
        }
        
        return nums;
    }
};

int main()
{
    Solution s;
    vector<int> nums1 = { -4,-1,0,3,10 };
    s.sortedSquares(nums1);
    for (int i = 0; i < nums1.size(); i++) {
        cout << nums1[i] << endl;
    }
    /*while (r != nullptr) {
        cout << r->val << endl;
        r = r->next;
    }*/
    /*vector<double> result;
    result = s.averageOfLevels(five);
    for (double r : result) {
        cout << r << endl;
    }*/
}

