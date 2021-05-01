#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> result;
        result.push_back({ 1 });
        if (numRows == 1) {
            return result;
        }

        for (int i = 1; i < numRows; i++) {
            vector<int> tmp;
            for (int j = 0; j < i + 1; j++) {
                if (j == 0 || j == i) {
                    tmp.push_back({ 1 });
                }
                else {
                    tmp.push_back(result[i - 1][j - 1] + result[i - 1][j]);
                }
            }
            result.push_back(tmp);
        }
        return result;
    }
};

int main()
{
    Solution s;
    vector<vector<int>> r = s.generate(5);

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