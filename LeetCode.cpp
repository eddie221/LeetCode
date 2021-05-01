#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

class Solution {
public:
    int titleToNumber(string columnTitle) {
        int number = 0;
        for (int i = 0; i < columnTitle.size(); i++) {
            number = (columnTitle[i] - 'A' + 1) + number * 26;
        }
        return number;
    }
};

int main()
{
    Solution s;
    cout << s.titleToNumber("AB");

    /* vector<bool> result;
     vector<int> nums = { 8,1,2,2,3 };
     result = s.intToRoman(nums);
     for (double r : result) {
         cout << r << endl;
     }*/
}