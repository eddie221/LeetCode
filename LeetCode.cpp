#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> result;
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());

        for (int i = 0, j = 0; i < nums1.size() && j < nums2.size();) {
            while (i < nums1.size() && j < nums2.size() && nums1[i] == nums2[j]) {
                result.push_back(nums1[i]);
                i++;
                j++;
            }
            if (i < nums1.size() && j < nums2.size() && nums1[i] > nums2[j]) {
                j++;
            }
            else if(i < nums1.size() && j < nums2.size() && nums1[i] < nums2[j]){
                i++;
            }
        }
        return result;
    }
};

int main()
{
    Solution s;
    vector<int> nums1 = { 1, 2, 2, 1 };
    vector<int> nums2 = { 2, 2 };
    vector<int> r = s.intersect(nums1, nums2);

    for (int i = 0; i < r.size(); i++) {
        cout << r[i] << " ";
    }
    
    /* vector<bool> result;
     vector<int> nums = { 8,1,2,2,3 };
     result = s.intToRoman(nums);
     for (double r : result) {
         cout << r << endl;
     }*/
}