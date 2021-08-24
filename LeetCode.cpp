#include <iostream>

using namespace std;

class Solution {
public:
    string toLowerCase(string s) {
        for (int i = 0; i < s.length(); i++) {
            if (s[i] <= 90 && s[i] >= 65) {
                s[i] = s[i] + 32;
            }
        }
        return s;
    }
};

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    Solution s;
    cout << s.toLowerCase("Hello");
    return 0;
}
