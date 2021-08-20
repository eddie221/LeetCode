#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int xorOperation(int n, int start) {
        int result = start;
        for (int i = 1; i < n; i++) {
            int num = start + 2 * i;
            result = result ^ num;
            num = num + (2 * i);
        }
        return result;
    }
};

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    Solution s;
    cout << s.xorOperation(5, 0);
    return 0;
}
