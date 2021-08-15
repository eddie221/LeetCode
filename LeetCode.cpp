#include <iostream>
#include <vector>
#include <string>


using namespace std;


class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> r;
        for (int i = 0; i <= n; i++) {
            if (i == 0) {
                r.push_back(0);
            }
            else if(i == 1 || i == 2) {
                r.push_back(1);
            }
            else if(i % 2 == 1){
                r.push_back(r[i >> 1] + 1);
            }
            else {
                r.push_back(r[i >> 1]);
            }
        }
        return r;
    }
};

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    Solution s;
    vector<int> r = s.countBits(10);
    for (auto x : r) {
        cout << x << endl;
    }
    return 0;
}
