#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int max_area = 0, n = height.size();
        for (int i = 0, j = n - 1; i < j;) {
            max_area = max(max_area, min(height[i], height[j]) * (j - i));
            if (height[i] < height[j]) {
                i++;
            }
            else {
                j--;
            }
        }
        return max_area;
    }
};

int main()
{
    Solution s;
    vector<int> height = { 1, 2, 4, 3 };
    cout << s.maxArea(height);
    /*for (int i = 0; i < r.size(); i++) {
        cout << r[i] << endl;
    }*/
    /* vector<bool> result;
     vector<int> nums = { 8,1,2,2,3 };
     result = s.intToRoman(nums);
     for (double r : result) {
         cout << r << endl;
     }*/
}