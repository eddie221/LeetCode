#include <iostream>
#include <vector>
#include <float.h>
#include <algorithm>

using namespace std;

class Solution {
public:
    int arrangeCoins(int n) {
        return (-1 + sqrt(1 + 8 * n)) / 2.;
    }
};

int main()
{
    Solution s;
    cout << s.arrangeCoins(2) << endl;
    /* vector<bool> result;
     vector<int> nums = { 8,1,2,2,3 };
     result = s.intToRoman(nums);
     for (double r : result) {
         cout << r << endl;
     }*/
}