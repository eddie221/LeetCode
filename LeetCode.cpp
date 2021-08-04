#include <iostream>
#include <vector>
#include <stack>

using namespace std;


class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        int replace_num = -1, replace_idx = -1;

        for (int i = 0; i < nums.size(); i++) {
            cout << nums[nums[i]] * nums.size() << " : " << nums[i] << endl;
            nums[i] += (nums[nums[i]] % nums.size()) * nums.size();
            
        }
        
        for (int i = 0; i < nums.size(); i++) {
            nums[i] /= nums.size();
        }
        return nums;
    }
};


int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    Solution s;
    vector<int> nums = { 5,0,1,2,3,4 };
    vector<int> r = s.buildArray(nums);
    for (int i = 0; i < r.size(); i++) {
        cout << r[i] << endl;
    }
    return 0;
}
