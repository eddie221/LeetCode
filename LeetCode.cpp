#include <iostream>

using namespace std;

class Solution {
public:
    long long reverse(int x) {
        long long rev = 0;
        while (x) {
            rev = rev * 10 + x % 10;
            x /= 10;
        }
        return rev;
    }

    bool isPalindrome(int x) {
        if (x < 0) {
            return false;
        }
        else {
            return x == reverse(x);
        }
    }
};

int main()
{
    Solution s;
    cout << s.reverse(121);
}

