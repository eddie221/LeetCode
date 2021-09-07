#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        for (auto x : g) {
            cout << x << " ";
        }
        cout << endl;
        for (auto x : s) {
            cout << x << " ";
        }
        cout << endl;
        int count = 0;
        for (int i = 0, j = 0; i < g.size() && j < s.size();) {
            cout << i << " " << j << " " << count << endl;
            while (i < g.size() && j < s.size() && g[i] <= s[j]) {
                cout << "while 1 : " << i << " " << j << " " << count << endl;
                count++;
                i++;
                j++;
            }
            while (i < g.size() && j < s.size() && g[i] > s[j]) {
                j++;
            }
        }
        return count;
    }
};

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    Solution s;
    vector<int> g = {10, 9, 8, 7 };
    vector<int> ss = { 5, 6, 7, 8};
    cout << s.findContentChildren(g, ss);
    
    return 0;
}
