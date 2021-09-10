#include <iostream>
#include <vector>
#include <stack>

using namespace std;

class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
        vector<vector<int>> tmp;
        vector<int> col_max(grid.size()), row_max(grid.size());
        for (int i = 0; i < grid.size(); i++) {
            int col_m = 0, row_m = 0;
            for (int j = 0; j < grid.size(); j++) {
                col_m = max(col_m, grid[i][j]);
                row_m = max(row_m, grid[j][i]);
            }
            col_max[i] = col_m;
            row_max[i] = row_m;
        }
        int res = 0;
        for (int i = 0; i < col_max.size(); i++) {
            for (int j = 0; j < row_max.size(); j++) {
                res += min(col_max[i], row_max[j]) - grid[i][j];
            }
        }
        return res;
    }
};

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    Solution s;
    vector<vector<int>> grid = {{3, 0, 8, 4}, {2, 4, 5, 7}, {9, 2, 6, 3}, {0, 3, 1, 0}};
    cout << s.maxIncreaseKeepingSkyline(grid);
    return 0;
}
