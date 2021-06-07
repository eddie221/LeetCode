#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    string maximumTime(string time) {
        if (time[0] == '?') {
            if (time[1] < '4' || time[1] == '?') {
                time[0] = '2';
            }
            else {
                time[0] = '1';
            }
        }
        if (time[1] == '?') {
            if (time[0] == '2') {
                time[1] = '3';
            }
            else {
                time[1] = '9';
            }
        }
        if (time[3] == '?') {
            time[3] = '5';
        }
        if (time[4] == '?') {
            time[4] = '9';
        }
        return time;
    }
};

int main()
{
    Solution s;
    vector<int> nums = {3, 2, 2};
    cout << s.maximumTime("1?:5?") << endl;
    /* vector<bool> result;
     vector<int> nums = { 8,1,2,2,3 };
     result = s.intToRoman(nums);
     for (double r : result) {
         cout << r << endl;
     }*/
}