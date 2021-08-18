#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i = 0;
        for (int j = 0; i < s.length() && j < t.length();) {
            while (i < s.length() && j < t.length() && s[i] != t[j]) {
                j++;
            }
            if (s[i] == t[j]) {
                i++;
                j++;
            }
        }
        if (i == s.length()) {
            return true;
        }
        else {
            return false;
        }
    }
};

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    Solution s;
    cout << s.isSubsequence("abc", "ahbgdc");
    cout << s.isSubsequence("a", "c");
    return 0;
}
