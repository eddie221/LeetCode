#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int hammingWeight(uint32_t n) {
        int count = 0;
        int i = 0;
        uint32_t mask = 1;
        for (int i = 0; i < 32; i++) {
            if (mask & n) {
                count++;
            }
            mask = mask << 1;
        }
        return count;
    }
};

int main()
{
    Solution s;
    cout << s.hammingWeight(00000000000000000000010000001011);

    /* vector<bool> result;
     vector<int> nums = { 8,1,2,2,3 };
     result = s.intToRoman(nums);
     for (double r : result) {
         cout << r << endl;
     }*/
}