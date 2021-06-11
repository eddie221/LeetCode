#include <iostream>
#include <vector>
#include <float.h>
#include <algorithm>

using namespace std;

class Solution {
public:
    bool containsPattern(vector<int>& arr, int m, int k) {
        if (arr.size() < m * k) {
            return false;
        }
        for (int i = 0; i < arr.size() - m * k + 1; i++) {
            int times = 0;
            bool get_ans = true;
            for (int j = 0; j < k; j++) {
                for (int y = 0; y < m; y++) {
                    cout << "i : " << i << " i + y : " << i + y << " j * m + y : " << j * m + y << endl;
                    if (arr[i + y] != arr[j * m + y + i]) {
                        cout << "false" << endl;
                        get_ans = false;
                        break;
                    }
                }
            }
            if (get_ans) {
                return true;
            }
        }
        return false;
    }
};

int main()
{
    Solution s;
    vector<int> arr = { 1, 3, 3, 4, 4, 4 };
    cout << s.containsPattern(arr, 1, 3) << endl;
    /* vector<bool> result;
     vector<int> nums = { 8,1,2,2,3 };
     result = s.intToRoman(nums);
     for (double r : result) {
         cout << r << endl;
     }*/
}