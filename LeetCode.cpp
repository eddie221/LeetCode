#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        for (int i = 0; i < s.length(); i++) {
            if (s[i] != s[s.length() - i - 1]) {
                return false;
            }
        }
        return true;
    }
    bool validPalindrome(string s) {
        for (int i = 0, j = s.length() - 1; i < j; i++, j--) {
            if (s[i] != s[j]) {
                if (isPalindrome(s.substr(i, j - i)) || isPalindrome(s.substr(i + 1, j - i))) {
                    return true;
                }
                return false;
            }
        }
        return true;
    }
};

int main()
{
    Solution s;
    cout << s.validPalindrome("abc");
    /* vector<bool> result;
     vector<int> nums = { 8,1,2,2,3 };
     result = s.intToRoman(nums);
     for (double r : result) {
         cout << r << endl;
     }*/
}