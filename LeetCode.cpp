#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries) {
        vector<int> result;
        for (int i = 0; i < queries.size(); i++) {
            result.push_back(0);
            for (int j = 0; j < points.size(); j++) {
                if (pow((points[j][0] - queries[i][0]), 2) + pow((points[j][1] - queries[i][1]), 2) <= pow(queries[i][2], 2)) {
                    result[result.size() - 1]++;
                }
            }
        }
        return result;
    }
};

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    Solution s;
    vector<vector<int>> points = {{1, 3}, {3, 3}, {5, 3}, {2, 2}};
    vector<vector<int>> queries = { {2,3,1} ,{4,3,1},{1,1,2} };
    vector<int> result = s.countPoints(points, queries);
    for (auto x : result) {
        cout << x << endl;
    }
    return 0;
}
