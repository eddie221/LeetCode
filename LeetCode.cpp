#include <iostream>
#include <unordered_set>
#include <string>

using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(std::string s) {
        std::unordered_set<char> set;
        int start = 0, end = 0, res = 0;

        while (end < s.length()) {
            std::unordered_set<char>::iterator iter = set.find(s[end]);
            if (iter == set.end()) {
                set.insert(s[end]);
                res = std::max(res, (end - start) + 1);
                end++;
            }
            else {
                set.erase(s[start]);
                start++;
            }
        }
        return res;
    }
};

int main()
{
    Solution s;
    string str = "abcabcbb";
    cout << s.lengthOfLongestSubstring(str);
}

