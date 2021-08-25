#include <iostream>

using namespace std;

class Solution {
public:
    int findComplement(int num) {
        int result = 0, count = 0;
        while (num != 0) {
            if (num % 2 == 0) {
                result = result + (1 << count);
            }
            count++;
            num = num >> 1;
        }
        return result;
    }
};

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    Solution s;
    cout << s.findComplement(4);
    return 0;
}
