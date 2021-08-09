#include <iostream>
#include <vector>
#include <map>

using namespace std;


class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        string result = s;
        for (int i = 0; i < s.length(); i++) {
            result[indices[i]] = s[i];
        }
        return result;
    }
};


int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    Solution s;
    vector<int> nums = { 3,1,4,2,0 };
    string in_s = "aiohn";
    string r = s.restoreString(in_s, nums);
    cout << r << endl;
    return 0;
}
