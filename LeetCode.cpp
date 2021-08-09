#include <iostream>
#include <vector>
#include <map>

using namespace std;


class Solution {
public:
    int numberOfSteps(int num) {
        int step = 0;
        while (num != 0) {
            if (num % 2 == 0) {
                num = num / 2;
            }
            else {
                num = num - 1;
            }
            step++;
        }
        return step;
    }
};


int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    Solution s;
    cout << s.numberOfSteps(123);
    return 0;
}
