#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    bool isBoomerang(vector<vector<int>>& points) {
        if (points[0] == points[1] || points[1] == points[2] || points[0] == points[2]) {
            return false;
        }
        else {
            if (points[0][0] == points[1][0] && points[0][0] == points[2][0] && points[1][0] == points[2][0]) {
                return false;
            }
            else if(points[0][1] == points[1][1] && points[0][1] == points[2][1] && points[1][1] == points[2][1]) {
                return false;
            }
            else if (float(points[0][0] - points[1][0]) / float(points[0][1] - points[1][1]) != float(points[1][0] - points[2][0]) / float(points[1][1] - points[2][1])) {
                return true;
            }
        }
        
        return false;
    }
};

int main()
{
    Solution s;
    vector<vector<int>> points = { {1, 1}, {2, 3}, {3, 2} };
    cout << s.isBoomerang(points);
    /* vector<bool> result;
     vector<int> nums = { 8,1,2,2,3 };
     result = s.intToRoman(nums);
     for (double r : result) {
         cout << r << endl;
     }*/
}