#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int firstUniqChar(string s) {
        int character[26] = { 0 };
        for (int i = 0; i < s.size(); i++) {
            character[s[i] - 'a']++;
        }
        for (int i = 0; i < s.size(); i++) {
            if (character[s[i] - 'a'] == 1) {
                return i;
            }
        }
        return -1;
    }
};

int main()
{
    Solution s;
    cout << s.firstUniqChar("dddccdbba");

    /*for (int i = 0; i < r.size(); i++) {
        for (int j = 0; j < r[i].size(); j++) {
            cout << r[i][j] << " ";
        }
        cout << endl;
    }*/
    
    /* vector<bool> result;
     vector<int> nums = { 8,1,2,2,3 };
     result = s.intToRoman(nums);
     for (double r : result) {
         cout << r << endl;
     }*/
}