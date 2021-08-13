#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<string> index;
        vector<vector<string>> result;
        for (int i = 0; i < strs.size(); i++) {
            string str_idx = strs[i];
            sort(str_idx.begin(), str_idx.end());
            if (find(index.begin(), index.end(), str_idx) == index.end()) {
                index.push_back(str_idx);
                result.push_back({ strs[i] });
            }
            else {
                int idx = int(find(index.begin(), index.end(), str_idx) - index.begin());
                result[idx].push_back(strs[i]);
            }
        }
        return result;
    }
};


int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    Solution s;
    vector<string> nums = { "eat","tea","tan","ate","nat","bat" };
    vector<vector<string>> r = s.groupAnagrams(nums);
    for (int i = 0; i < r.size(); i++) {
        for (int j = 0; j < r[i].size(); j++) {
            cout << r[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
