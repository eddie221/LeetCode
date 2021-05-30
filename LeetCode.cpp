#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

class Solution {
public:
    map<int, vector<string>> keypad = { {2, {"a", "b", "c"}},
                                        {3, {"d", "e", "f"}},
                                        {4, {"g", "h", "i"}},
                                        {5, {"j", "k", "l"}},
                                        {6, {"m", "n", "o"}},
                                        {7, {"p", "q", "r", "s"}},
                                        {8, {"t", "u", "v"}},
                                        {9, {"w", "x", "y", "z"}}};

    vector<string> letterCombinations(string digits) {
        vector<string> result;
        if (digits.length() == 0) {
            return result;
        }
        else if (digits.length() == 1) {
            return keypad[digits[0] - '0'];
        }
        else {
            vector<string> child_substr = letterCombinations(digits.substr(1, digits.length()));
            for (int i = 0; i < keypad[digits[0] - '0'].size(); i++) {
                for (int j = 0; j < child_substr.size(); j++) {
                    result.push_back(keypad[digits[0] - '0'][i] + child_substr[j]);
                }
            }
        }
        
        return result;
    }
};

int main()
{
    Solution s;
    vector<int> nums = { -1,0,1,2,-1,-4 };
    vector<string> r = s.letterCombinations("");
    for (int i = 0; i < r.size(); i++) {
        for (int j = 0; j < r[i].size(); j++) {
            cout << r[i][j] << " ";
        }
        cout << endl;
    }
    /* vector<bool> result;
     vector<int> nums = { 8,1,2,2,3 };
     result = s.intToRoman(nums);
     for (double r : result) {
         cout << r << endl;
     }*/
}