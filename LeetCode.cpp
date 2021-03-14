#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    double findMedianSortedArrays(std::vector<int>& nums1, std::vector<int>& nums2) {
        if (nums1.size() > nums2.size()) {
            nums1.swap(nums2);
        }
        int half_len = (nums1.size() + nums2.size() + 1) / 2;
        int min_index = 0, max_index = nums1.size();
        while (min_index <= max_index) {
            int i = (max_index + min_index) / 2, j = half_len - i;
            //std::cout << "i : " << i << " j : " << j << std::endl;
            if (i < nums1.size() && nums1[i] < nums2[j - 1]) {
                //std::cout << "1 -- " << nums1[i] << " : " << nums2[j - 1] << std::endl;
                min_index = i + 1;
            }
            else if (i > 0 && nums1[i - 1] > nums2[j]) {
                //std::cout << "2 -- " << nums1[i - 1] << " : " << nums2[j] << std::endl;
                max_index = i - 1;
            }
            else {
                int max_of_left = 0, min_of_right = 0;
                if (i == 0) {
                    max_of_left = nums2[j - 1];
                }
                else if (j == 0) {
                    max_of_left = nums1[i - 1];
                }
                else {
                    max_of_left = std::max(nums1[i - 1], nums2[j - 1]);
                }

                if ((nums1.size() + nums2.size()) % 2 == 1) {
                    return max_of_left;
                }

                if (i == nums1.size()) {
                    min_of_right = nums2[j];
                }
                else if (j == nums2.size()) {
                    min_of_right = nums1[i];
                }
                else {
                    min_of_right = std::min(nums1[i], nums2[j]);
                }

                return (max_of_left + min_of_right) / 2.0;
            }
        }
        return 0.0;
    }
};

int main()
{
    Solution s;
    vector<int> a = { 1,3 };
    vector<int> b = { 2 };
    cout << s.findMedianSortedArrays(a, b);
}

