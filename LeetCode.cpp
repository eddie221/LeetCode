#include <iostream>
#include <vector>
#include <stack>

using namespace std;

class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> r;
        r = permute(nums, 0);
        return r;
    }

    vector<vector<int>> permute(vector<int> nums, int n) {
        if (n == nums.size() - 1) {
            return { nums };
        }
        vector<vector<int>> tmp1 = permute(nums, n + 1);
        vector<vector<int>> result = tmp1;
        for (int i = n + 1; i < nums.size(); i++) {
            nums[n] = nums[i] ^ nums[n];
            nums[i] = nums[i] ^ nums[n];
            nums[n] = nums[i] ^ nums[n];
            vector<vector<int>> tmp2 = permute(nums, n + 1);
            result.reserve(tmp2.size() + result.size());
            result.insert(result.end(), tmp2.begin(), tmp2.end());
        }
        return result;
        
    }
};

int main()
{
    Solution s;
    vector<int> nums = { 1,2,3 };
    vector<vector<int>> r = s.permute(nums);
    for (int i = 0; i < r.size(); i++) {
        for (int j = 0; j < r[i].size(); j++) {
            cout << r[i][j];
        }
        cout << endl;
    }
    
    /*while (r != nullptr) {
        cout << r->val << endl;
        r = r->next;
    }*/
   /* vector<bool> result;
    vector<int> nums = { 8,1,2,2,3 };
    result = s.intToRoman(nums);
    for (double r : result) {
        cout << r << endl;
    }*/
}

