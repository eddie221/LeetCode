#include <iostream>
#include <vector>
#include <float.h>
#include <algorithm>

using namespace std;

class Solution {
public:
    bool repeatedSubstringPattern(string s) {

        for (int i = 1; i < s.length() / 2 + 1; i++) {
            bool repeat = true;
            if (s[0] == s[i] && s.length() % i == 0) {
                //cout << start << " : " << i << endl;
                for (int j = 0; j < s.length() - i; j++) {
                    if (s[j] != s[j + i]) {
                        repeat = false;
                        break;
                    }
                }
                if (repeat) {
                    return true;
                }
            }
        }
        return false;
    }
};

int main()
{
    Solution s;
    cout << s.repeatedSubstringPattern("ababba") << endl;
    cout << s.repeatedSubstringPattern("abcabc") << endl;
    cout << s.repeatedSubstringPattern("abcabcabc") << endl;
    cout << s.repeatedSubstringPattern("abab") << endl;
    cout << s.repeatedSubstringPattern("aabaaba") << endl;
    /* vector<bool> result;
     vector<int> nums = { 8,1,2,2,3 };
     result = s.intToRoman(nums);
     for (double r : result) {
         cout << r << endl;
     }*/
}