#include <iostream>
#include <vector>
#include <float.h>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<int> numMovesStones(int a, int b, int c) {
        if (a > b) {
            b = a ^ b;
            a = a ^ b;
            b = a ^ b;
        }
        if (b > c) {
            b = c ^ b;
            c = c ^ b;
            b = c ^ b;
        }
        if (a > b) {
            b = a ^ b;
            a = a ^ b;
            b = a ^ b;
        }
        if (a + 1 == b && b + 1 == c) {
            return { 0, 0 };
        }
        else if (a + 1 == b || b + 1 == c || a + 2 == b || b + 2 == c) {
            return { 1, b - a - 1 + c - b - 1 };
        }
        return { 2, b - a - 1 + c - b - 1 };
    }
};

int main()
{
    Solution s;
    vector<int> ans;
    ans = s.numMovesStones(1, 2, 5);
    cout << ans[0] << " : " << ans[1] << endl;
    ans = s.numMovesStones(4,3,2);
    cout << ans[0] << " : " << ans[1] << endl;
    ans = s.numMovesStones(3, 5,1 );
    cout << ans[0] << " : " << ans[1] << endl;
    /* vector<bool> result;
     vector<int> nums = { 8,1,2,2,3 };
     result = s.intToRoman(nums);
     for (double r : result) {
         cout << r << endl;
     }*/
}