#include <iostream>

using namespace std;

class Solution {
public:
    int hammingDistance(int x, int y) {
        int xor_result = x ^ y, result = 0;
        cout << xor_result << endl;
        while (xor_result != 0) {
            if (xor_result & 1 == 1) {
                result++;
            }

            xor_result = xor_result >> 1;
        }
        return result;
    }
};

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    Solution s;
    cout << (2 >> 1) << endl;
    cout << s.hammingDistance(1, 3);
    return 0;
}
