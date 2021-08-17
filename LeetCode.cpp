#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        vector<int> r;
        for (int i = 0, j = 0; i < nums1.size() && j < nums2.size();) {
            if (nums1[i] == nums2[j]) {
                if (r.empty()) {
                    r.push_back(nums1[i]);
                }
                else if (r[r.size() - 1] != nums1[i]) {
                    r.push_back(nums1[i]);
                }
                i++;
                j++;
            }
            else if (nums1[i] > nums2[j]) {
                j++;
            }
            else {
                i++;
            }
        }
        return r;
    }
};

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    Solution s;
    vector<int> nums1 = {4, 9, 5};
    vector<int> nums2 = { 9,4,9,8,4 };
    vector<int> r = s.intersection(nums1, nums2);
    for (auto x : r) {
        cout << x << endl;
    }
    return 0;
}
