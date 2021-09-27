#include <iostream>
#include <vector>
#include <map>

using namespace std;

class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        vector<vector<int>> result;
        map<int, vector<int>> waiting;
        for (int i = 0; i < groupSizes.size(); i++) {
            if (groupSizes[i] == 1) {
                result.push_back({i});
            }
            else {
                waiting[groupSizes[i]].push_back(i);
                if (waiting[groupSizes[i]].size() == groupSizes[i]) {
                    result.push_back(waiting[groupSizes[i]]);
                    waiting.erase(groupSizes[i]);
                }
            }
        }
        return result;
    }
};

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    Solution s;
    vector<int> groupSizes = { 3,3,3,3,3,1,3 };
    vector<vector<int>> result = s.groupThePeople(groupSizes);
    for (auto x : result) {
        for (auto y : x) {
            cout << y << " ";
        }
        cout << endl;
    }
    return 0;
}
