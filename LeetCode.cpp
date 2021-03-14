#include <iostream>
#include <stack>
#include <algorithm>

using namespace std;

class Solution {
public:
    bool buddyStrings(string A, string B) {
        if (A.length() != B.length() || A.length() == 0 || B.length() == 0) {
            return false;
        }
        else if (A == B) {

            for (int i = 0; i < A.length(); i++) {
                for (int j = i + 1; j < A.length(); j++) {
                    if (A[i] == A[j]) {
                        return true;
                    }
                }
            }
            return false;
        }
        else {
            int first_diff_idx = -1;
            for (int i = 0; i < A.length(); i++) {
                if (A[i] != B[i] && first_diff_idx == -1) {
                    first_diff_idx = i;
                    continue;
                }
                if (A[i] != B[i]) {
                    string tmp_A = A;
                    char tmp_f = A[first_diff_idx];
                    tmp_A[first_diff_idx] = tmp_A[i];
                    tmp_A[i] = tmp_f;
                    if (tmp_A == B) {
                        return true;
                    }
                    else {
                        return false;
                    }
                }
            }
        }
        return false;
    }
};

int main()
{
    Solution s;
    cout << s.buddyStrings("ab", "ba");
}

