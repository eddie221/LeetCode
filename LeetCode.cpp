#include <iostream>
#include <vector>
#include <float.h>
#include <algorithm>

using namespace std;

class Solution {
public:

    bool checkStraightLine(vector<vector<int>>& coordinates) {
        sort(coordinates.begin(), coordinates.end());
        double slope = (double(coordinates[1][1] - coordinates[0][1]) / double(coordinates[1][0] - coordinates[0][0]));
        for (int i = 2; i < coordinates.size(); i++) {
            if (slope != (double(coordinates[i][1] - coordinates[0][1]) / double(coordinates[i][0] - coordinates[0][0]))) {
                return false;
            }
        }
        return true;
    }
};

int main()
{
    Solution s;
    vector<vector<int>> coordinates = {{1, 1}, {2, 2}, {3, 4}, {4, 5}, {5, 6}, {7, 7}};
    cout << s.checkStraightLine(coordinates) << endl;
    vector<vector<int>> coordinates1 = { {0, 0}, {0, 1}, {0, -1}};
    cout << s.checkStraightLine(coordinates1) << endl;
    vector<vector<int>> coordinates2 = { {1, 2}, {2, 3}, {3, 4}, {4, 5}, {5, 6}, {7, 8} };
    cout << s.checkStraightLine(coordinates2) << endl;
    vector<vector<int>> coordinates3 = {{-17, 12}, {6, 4}, {-10, -12}, {-12, 12}, {5, 5}, {14, -14}, {-8, 5}, {-15, -12}, {-5, -15}, {-3, 13}, {7, 11}, {15, 14}, {4, 2}, {-6, 13}, {-4, 12}, {-3, 5}, {-7, -9}};
    cout << s.checkStraightLine(coordinates3) << endl;
    /* vector<bool> result;
     vector<int> nums = { 8,1,2,2,3 };
     result = s.intToRoman(nums);
     for (double r : result) {
         cout << r << endl;
     }*/
}