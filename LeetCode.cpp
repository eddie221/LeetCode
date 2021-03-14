#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {
        if (needle.length() == 0) {
            return 0;
        }
        if (haystack.length() == 0) {
            return -1;
        }
        int number = haystack.length() - needle.length();
        for (int i = 0; i <= number; i++) {
            bool same = true;
            for (int j = 0; j < needle.length(); j++) {
                if (haystack[i + j] != needle[j]) {
                    same = false;
                    break;
                }
            }
            if (same) {
                return i;
            }
        }
        return -1;
    }
};

int main()
{
    Solution s;
    cout << s.strStr("hello", "ll");
}

