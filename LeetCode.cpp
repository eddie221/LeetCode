#include <iostream>
#include <vector>
#include <float.h>
#include <algorithm>

using namespace std;

class Solution {
public:
    bool isRectangleOverlap(vector<int>& rec1, vector<int>& rec2) {
        if (rec1[0] == rec1[2] || rec1[1] == rec1[3] || rec2[0] == rec2[2] || rec2[1] == rec2[3]) {
            return false;
        }
        return !(rec1[0] >= rec2[2] || rec1[1] >= rec2[3] || rec1[2] <= rec2[0] || rec1[3] <= rec2[1]);
    }
};

int main()
{
    Solution s;
    vector<int> rec1 = { 0, 0, 2, 2 }, rec2 = { 1, 1, 3, 3 };
    cout << s.isRectangleOverlap(rec1, rec2) << endl;
    /* vector<bool> result;
     vector<int> nums = { 8,1,2,2,3 };
     result = s.intToRoman(nums);
     for (double r : result) {
         cout << r << endl;
     }*/
}