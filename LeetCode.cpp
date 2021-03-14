#include <iostream>
#include <math.h>

using namespace std;


class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t result = 0;
        int power = 31;
        while (n != 0) {
            result += (n & 1) << power;
            power -= 1;
            n = n >> 1;
        }
        return result;
    }
};

int main()
{
    Solution s;
    uint32_t n = 43261596;
    cout << s.reverseBits(n);
}

