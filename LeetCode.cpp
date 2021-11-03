#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int row = grid.size(), col = grid[0].size();
        int island_count = 0, edge_cover = 0;
        for (int r = 0; r < row; r++) {
            for (int c = 0; c < col; c++) {
                if (grid[r][c] == 1) {
                    island_count++;
                    if (r + 1 != row && grid[r + 1][c] == 1) {
                        edge_cover++;
                    }
                    if (c + 1 != col && grid[r][c + 1] == 1) {
                        edge_cover++;
                    }
                }
            }
        }
        cout << island_count << endl;
        cout << edge_cover << endl;
        return island_count * 4 - edge_cover * 2;
    }
};

int main() {   
    Solution s;
    vector<vector<int>> grid = { {0, 1, 0, 0}, {1, 1, 1, 0}, {0, 1, 0, 0}, {1, 1, 0, 0} };
    cout << s.islandPerimeter(grid);
    return 0;
}
