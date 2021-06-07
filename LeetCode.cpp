#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    bool checkOnesSegment(string s) {
        bool meet_one = false;
        for (int i = 0; i < s.length(); i++) {
            while(i < s.length() && s[i] == '0') {
                i++;
            }
            int start_i = i;
            while (i < s.length() && s[i] == '1' && !meet_one) {
                i++;
            }
            if (i != start_i) {
                meet_one = true;
            }
            while (i < s.length() && s[i] == '0') {
                i++;
            }
            if (i < s.length() && s[i] == '1' && meet_one) {
                return false;
            }
        }
        return true;
    }
};

int main()
{
    Solution s;
    vector<int> nums = {3, 2, 2};
    cout << s.checkOnesSegment("1001") << endl;
    /* vector<bool> result;
     vector<int> nums = { 8,1,2,2,3 };
     result = s.intToRoman(nums);
     for (double r : result) {
         cout << r << endl;
     }*/
}