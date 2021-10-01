#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> result;
        if (n == 0) {
            return {};
        }
        else if (n == 1) {
            return { "()" };
        }
        else {
            for (int i = 0; i < n; i++) {
                vector<string> left = generateParenthesis(i);
                vector<string> right = generateParenthesis(n - i - 1);
                if (left.size() == 0) {
                    for (int j = 0; j < right.size(); j++) {
                        result.push_back("()" + right[j]);
                    }
                }
                else if (right.size() == 0) {
                    for (int j = 0; j < left.size(); j++) {
                        result.push_back("(" + left[j] + ")");
                    }
                }
                else {
                    for (int j = 0; j < left.size(); j++) {
                        for (int k = 0; k < right.size(); k++) {
                            result.push_back("(" + left[j] + ")" + right[k]);
                        }
                    }
                }
            }
        }
        return result;
    }
};

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    Solution s;
    vector<string> result = s.generateParenthesis(3);
    cout << "ans : " << endl;
    for (auto x : result) {
        cout << x << endl;
    }
    return 0;
}
