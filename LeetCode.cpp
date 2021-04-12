#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& A) {
        vector<bool> result;
        int val = 0;
        for (int i = 0; i < A.size(); i++) {
            val = val * 2 + A[i];
            if (val % 5 == 0) {
                result.push_back(true);
            }
            else {
                result.push_back(false);
            }
            val = val % 5;

        }

        return result;
    }
};

int main()
{
    Solution s;
    vector<int> A = { 1,1,1 };
    //cout << s.prefixesDivBy5(A);
    /*while (r != nullptr) {
        cout << r->val << endl;
        r = r->next;
    }*/
    vector<bool> result;
    vector<int> nums = { 8,1,2,2,3 };
    result = s.prefixesDivBy5(nums);
    for (double r : result) {
        cout << r << endl;
    }
}

