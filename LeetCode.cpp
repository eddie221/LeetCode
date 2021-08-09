#include <iostream>
#include <vector>
#include <map>

using namespace std;


class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        vector<int> result = { first };
        for (int i = 0; i < encoded.size(); i++) {
            result.push_back(result[i] ^ encoded[i]);
        }
        return result;
    }
};


int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    Solution s;
    vector<int> encoded = { 1,2,3 };
    vector<int> r = s.decode(encoded, 1);
    for (int i = 0; i < r.size(); i++) {
        cout << r[i] << endl;
    }
    return 0;
}
