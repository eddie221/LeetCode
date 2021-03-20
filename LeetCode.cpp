#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    static bool sortcol(const vector<int>& v1, const vector<int>& v2) {
        return v1[1] < v2[1];
    }

    bool validSquare(vector<int>& p1, vector<int>& p2, vector<int>& p3, vector<int>& p4) {
        int dist_matrix[4][4] = { 0 };
        vector<vector<int>> points = { p1, p2, p3, p4 };
        sort(points.begin(), points.end(), sortcol);
        sort(points.begin(), points.end());

        float dist1 = pow((points[0][0] - points[1][0]), 2) + pow((points[0][1] - points[1][1]), 2);
        float dist2 = pow((points[0][0] - points[2][0]), 2) + pow((points[0][1] - points[2][1]), 2);
        float dist3 = pow((points[3][0] - points[2][0]), 2) + pow((points[3][1] - points[2][1]), 2);
        float dist4 = pow((points[3][0] - points[1][0]), 2) + pow((points[3][1] - points[1][1]), 2);

        float dist5 = pow((points[3][0] - points[0][0]), 2) + pow((points[3][1] - points[0][1]), 2);
        float dist6 = pow((points[1][0] - points[2][0]), 2) + pow((points[1][1] - points[2][1]), 2);
        
        if (dist1 == dist2 && dist2 == dist3 && dist3 == dist4 && dist5 == dist6 && dist1 != 0 && dist5 != 0) {
            return true;
        }
        else {
            return false;
        }

    }
};

int main()
{
    Solution s;
    vector<int> p1 = { 0 ,0 };
    vector<int> p2 = { 0 ,1 };
    vector<int> p3 = { 1 ,1 };
    vector<int> p4 = { 1 ,0 };

    cout << s.validSquare(p1, p2, p3, p4);
}

