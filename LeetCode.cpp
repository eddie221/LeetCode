#include <iostream>

using namespace std;

class Solution {
public:
    int reverse(int x) {
        int res = -1;
        int r_num = 0;

        while (x != 0) {
            res = x % 10;
            x = x / 10;
            if (r_num > INT_MAX / 10 || (r_num == INT_MAX / 10 && res >= 7)) return 0;
            if (r_num < INT_MIN / 10 || (r_num == INT_MIN / 10 && res < -8)) return 0;
            r_num = r_num * 10 + res;
        }

        return r_num;
    }
};

int main()
{
    Solution s;
    cout << s.reverse(123);
}

