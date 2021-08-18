#include <iostream>
#include <vector>
#include <map>

using namespace std;

class Solution {
public:
    int longestPalindrome(string s) {
        map<char, int> count;
        for (int i = 0; i < s.length(); i++) {
            count[s[i]]++;
        }
        int length = 0;
        bool mid = false;
        for (map<char, int>::iterator it = count.begin(); it != count.end(); it++) {
            length += it->second - it->second % 2;
            if (!mid && it->second % 2 == 1) {
                mid = true;
                length += it->second % 2;
            }
        }
        return length;
    }
};

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    Solution s;
    cout << s.longestPalindrome("abccccdd");
    return 0;
}
