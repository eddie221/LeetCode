#include <iostream>
#include <vector>
#include <float.h>
#include <algorithm>

using namespace std;

class Solution {
public:
    string licenseKeyFormatting(string s, int k) {
        reverse(s.begin(), s.end());
        for (int i = 0, count = 0; i < s.length(); i++) {
            if (s[i] == '-' && count < k) {
                s.erase(s.begin() + i);
                i--;
            }
            else if(s[i] >= 'a' && s[i] <= 'z'){
                count++;
                s[i] = s[i] - ('a' - 'A');
                if (count == k && i != s.length() - 1) {
                    s.insert(s.begin() + i + 1, '-');
                    i++;
                    count = 0;
                }
            }
            else if (s[i] >= 'A' && s[i] <= 'Z') {
                count++;
                if (count == k && i != s.length() - 1) {
                    s.insert(s.begin() + i + 1, '-');
                    i++;
                    count = 0;
                }
            }
            else if (isdigit(s[i])) {
                count++;
                if (count == k && i != s.length() - 1) {
                    s.insert(s.begin() + i + 1, '-');
                    i++;
                    count = 0;
                }
            }
        }
        while (s != "" && s[s.length() - 1] == '-') {
            s.erase(s.end() - 1);
        }
        reverse(s.begin(), s.end());
        return s;
    }
};

int main()
{
    Solution s;
    cout << s.licenseKeyFormatting("---", 3) << endl;
    /* vector<bool> result;
     vector<int> nums = { 8,1,2,2,3 };
     result = s.intToRoman(nums);
     for (double r : result) {
         cout << r << endl;
     }*/
}