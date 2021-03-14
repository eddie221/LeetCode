#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) {
            return "";
        }
        string result = strs[0];
        for (int i = 1; i < strs.size(); i++) {
            string result_t = "";
            for (int j = 0; j < strs[i].size() || j < result.size(); j++) {
                if (result[j] != strs[i][j]) {
                    break;
                }
                result_t += result[j];
            }
            if (result.length() > result_t.length() || i == 1) {
                result = result_t;
            }
        }
        return result;
    }
};

int main()
{
    Solution s;
    vector<string> strs = { "flower","flow","flight" };
    cout << s.longestCommonPrefix(strs);
}

