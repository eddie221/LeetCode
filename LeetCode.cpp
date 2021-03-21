#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    int climbStairs(int n) {
        if (n == 1) {
            return 1;
        }
        if (n == 2) {
            return 2;
        }
        int* path = new int[n + 1];
        path[0] = 0;
        path[1] = 1;
        path[2] = 2;
        for (int i = 3; i <= n; i++) {
            path[i] = path[i - 1] + path[i - 2];
        }

        return path[n];
    }
};

int main()
{
    Solution s;
    cout << s.climbStairs(21);
}

