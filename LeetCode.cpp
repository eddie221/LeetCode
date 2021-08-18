#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    char findTheDifference(string s, string t) {
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        for (int i = 0; i < s.length(); i++) {
            if (s[i] != t[i]) {
                return t[i];
            }
        }
        return t[t.length() - 1];
    }
};

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    Solution s;
    cout << s.findTheDifference("", "y");
    return 0;
}
