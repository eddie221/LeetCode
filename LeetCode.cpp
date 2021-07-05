#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int h = mat.size();
        int w = mat[0].size();
        cout << h << w << endl;
        if (h * w != r * c) {
            return mat;
        }
        vector<vector<int>> result;
        int mat_i = 0, mat_j = 0;
        for (int i = 0; i < r; i++) {
            result.push_back({});
            for (int j = 0; j < c; j++) {
                result[i].push_back(mat[mat_i][mat_j]);
                if (mat_j == w - 1) {
                    mat_j = 0;
                    if (mat_i == h - 1) {
                        mat_i = 0;
                    }
                    else {
                        mat_i++;
                    }
                }
                else {
                    mat_j++;
                }
            }
            
        }
        return result;
    }
};

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    Solution s;
    //vector<int> nums = { 105,924,32,968};
    vector<vector<int>> nums = { {1, 2 }, {3, 4}};
    vector<vector<int>> r = s.matrixReshape(nums, 4, 1);
    for (int i = 0; i < r.size(); i++) {
        for (int j = 0; j < r[i].size(); j++) {
            cout << r[i][j] << " ";
        }
        cout << endl;
    }


    return 0;
}
