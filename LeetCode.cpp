#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        if (nums.size() == 1) {
            return;
        }
        for (int i = nums.size() - 1; i > 0; i--) {
            if (nums[i - 1] < nums[i]) {
                int j = i;
                while (j < nums.size() && nums[i - 1] < nums[j]) {
                    j++;
                }
                cout << nums[j - 1] << endl;
                nums[j - 1] = nums[i - 1] ^ nums[j - 1];
                nums[i - 1] = nums[i - 1] ^ nums[j - 1];
                nums[j - 1] = nums[i - 1] ^ nums[j - 1];
                sort(nums.begin() + i , nums.end());
                return;
            }
        }
        sort(nums.begin(), nums.end());
        
    }
};

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    Solution s;
    vector<int> nums = { 1,7,6,8,7 };
    s.nextPermutation(nums);
    for (auto x : nums) {
        cout << x << " ";
    }
    cout << endl;

    vector<int> nums1 = { 1,1, 5 };
    s.nextPermutation(nums1);
    for (auto x : nums1) {
        cout << x << " ";
    }
    cout << endl;

    vector<int> nums2 = {2, 3, 1 };
    s.nextPermutation(nums2);
    for (auto x : nums2) {
        cout << x << " ";
    }
    cout << endl;
    /*vector<int> nums2 = { 1,7,4,6,3 };
    s.nextPermutation(nums2);
    for (auto x : nums2) {
        cout << x << " ";
    }*/
    return 0;
}
