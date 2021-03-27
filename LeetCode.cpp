#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int fib(int n) {
        int* result;
        if (n >= 2) {
            result = new int[n + 1];
        }
        else {
            result = new int[2];
        }
        result[0] = 0;
        result[1] = 1;
        for (int i = 2; i <= n; i++) {
            result[i] = result[i - 1] + result[i - 2];
        }
        return result[n];
    }
};

int main()
{
    Solution s;
    cout << s.fib(3);
    /*result = s.decompressRLElist(nums);
    for (int r : result) {
        cout << r << endl;
    }*/
}

