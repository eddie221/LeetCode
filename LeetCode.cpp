#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    bool isPowerOfFour(int n) {
        if (n <= 0) {
            return false;
        }
        if ((n - 1) & n) {
            return false;
        }
        return !(n & 0xAAAAAAAA);
    }
};

int main()
{
    Solution s;
    cout << s.isPowerOfFour(16) << endl;
    cout << s.isPowerOfFour(2) << endl;
    cout << s.isPowerOfFour(1) << endl;
    cout << s.isPowerOfFour(0) << endl;
    /* vector<bool> result;
     vector<int> nums = { 8,1,2,2,3 };
     result = s.intToRoman(nums);
     for (double r : result) {
         cout << r << endl;
     }*/
}