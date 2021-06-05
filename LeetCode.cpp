#include <iostream>
#include <vector>
#include <string>

using namespace std;

bool isBadVersion(int i) {
    if (i >= 8) {
        return true;
    }
    return false;
}


class Solution {
public:
    int firstBadVersion(int n) {
        long high = n, low = 1, mid = (high + low) / 2;

        while (!(!isBadVersion(mid - 1) && isBadVersion(mid))) {
            mid = (high + low) / 2;
            if (!isBadVersion(mid)) {
                low = mid + 1;
            }
            else {
                high = mid - 1;
            }

        }
        return mid;
    }
};

int main()
{
    Solution s;
    cout << s.firstBadVersion(10);
    /* vector<bool> result;
     vector<int> nums = { 8,1,2,2,3 };
     result = s.intToRoman(nums);
     for (double r : result) {
         cout << r << endl;
     }*/
}