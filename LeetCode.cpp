#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int myAtoi(string s) {
        int sign = 1;
        int result = 0;
        int start = 0;

        while (start < s.length() && s[start] == ' ') {
            start++;
        }
        if (s[start] == '-') {
            sign = -1;
            start++;
        }
        else if (s[start] == '+') {
            sign = 1;
            start++;
        }
        
        for (int i = start; i < s.length() && s[i] >= '0' && s[i] <= '9'; i++) {
            if (result > INT_MAX / 10 || (result == INT_MAX / 10 && s[i] > '7' && s[i] <= '9')) {
                if (sign == 1) {
                    return INT_MAX;
                }
                else {
                    return INT_MIN;
                }
            }
            result = result * 10 + (s[i] - '0');
        }
        return result * sign;
    }
};

int main()
{
    Solution s;
    cout << s.myAtoi(" -42");
    
    /*while (r != nullptr) {
        cout << r->val << endl;
        r = r->next;
    }*/
   /* vector<bool> result;
    vector<int> nums = { 8,1,2,2,3 };
    result = s.intToRoman(nums);
    for (double r : result) {
        cout << r << endl;
    }*/
}

