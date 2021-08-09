#include <iostream>
#include <vector>
#include <map>

using namespace std;


class Solution {
public:
    int balancedStringSplit(string s) {
        int balanced = 0, count = 0;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == 'R') {
                count--;
            }
            else {
                count++;
            }
            if (count == 0) {
                balanced++;
            }
        }
        return balanced;
    }
};


int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    Solution s;
    cout << s.balancedStringSplit("RLLLLRRRLR");
    return 0;
}
