#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    int countSegments(string s) {
        int count = 0;
        for (int i = 0; i < s.length(); i++) {
            while (i < s.length() && s[i] == ' ') {
                i++;
            }
            if (i < s.length() && s[i] != ' ') {
                count++;
            }
            while (i < s.length() && s[i] != ' ') {
                i++;
            }
        }
        return count;
    }
};

int main()
{
    Solution s;
    cout << s.countSegments("Hello, my name is John");
    /* vector<bool> result;
     vector<int> nums = { 8,1,2,2,3 };
     result = s.intToRoman(nums);
     for (double r : result) {
         cout << r << endl;
     }*/
}