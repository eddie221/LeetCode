#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        if (s1.length() != s2.length()) {
            return false;
        }
        else {
            int diff_i1 = -1, diff_i2 = -1;
            for (int i = 0; i < s1.length(); i++) {
                if (s1[i] != s2[i]) {
                    if (diff_i1 == -1) {
                        diff_i1 = i;
                    }
                    else if (diff_i2 == -1) {
                        diff_i2 = i;
                        swap(s1[diff_i1], s1[diff_i2]);
                        if (s1 == s2) {
                            return true;
                        }
                        else {
                            return false;
                        }
                        
                    }
                    else {
                        return false;
                    }
                }
            }
            if (diff_i1 != -1 && diff_i2 == -1) {
                return false;
            }
        }
        return true;
    }
};

int main()
{
    Solution s;
    cout << s.areAlmostEqual("bank", "kanb");
}

