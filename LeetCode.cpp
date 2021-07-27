#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> result, tmp = { 1, 1 };
        if (rowIndex == 0) {
            return { 1 };
        }
        else if (rowIndex == 1) {
            return { 1, 1 };
        }
        else {
            for (int i = 2; i <= rowIndex; i++) {
                result.clear();
                result.push_back(1);
                for (int j = 1; j < i; j++) {
                    result.push_back(tmp[j - 1] + tmp[j]);
                }
                result.push_back(1);
                tmp = result;
            }
        }
        return result;
    }
};

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    Solution s;
    //vector<int> nums = { 105,924,32,968};
    vector<int> r = s.getRow(5);
    for (int i = 0; i < r.size(); i++) {
        cout << r[i] << endl;
    }


    return 0;
}
