#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        if (nums2.size() != 0 && nums1.size() != 0) {
            swap_ranges(nums1.begin() + m, nums1.end(), nums2.begin());
            sort(nums1.begin(), nums1.end());
        }
        
    }
};

int main()
{
    Solution s;
    vector<int> nums1 = { 1,2,3,0,0,0 };
    vector<int> nums2 = { 2, 4, 5 };
    s.merge(nums1, 3, nums2, 3);
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

