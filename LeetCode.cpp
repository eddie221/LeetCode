#include <iostream>
#include <vector>
#include <map>

using namespace std;


class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        int center_node = 0;
        if (edges[0][0] == edges[1][0] || edges[0][0] == edges[1][1]) {
            center_node = edges[0][0];
        }
        else if (edges[0][1] == edges[1][0] || edges[0][1] == edges[1][1]) {
            center_node = edges[0][1];
        }
        return center_node;
    }
};


int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    Solution s;
    vector<vector<int>> edges = { {1,2} ,{5,1},{1,3},{1,4} };
    cout << s.findCenter(edges);
    return 0;
}
