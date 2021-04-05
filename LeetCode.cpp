#include <iostream>
#include <queue>

using namespace std;

class Solution {
public:
    bool rotateString(string A, string B) {
        if (A.length() == B.length()) {
            if (A == B) {
                return true;
            }
            for (int i = 1; i < A.length(); i++) {
                string tmp = "";
                for (int j = i; j < A.length(); j++) {
                    tmp = tmp + A[j];
                }
                for (int k = 0; k < i; k++) {
                    tmp = tmp + A[k];
                }
                if (tmp == B) {
                    return true;
                }
            }
        }
        else {
            return false;
        }
        return false;
    }
};

int main()
{
    Solution s;
    
    cout << s.rotateString("", "");
    /*while (r != nullptr) {
        cout << r->val << endl;
        r = r->next;
    }*/
    /*vector<int> result;
    vector<int> nums = { 8,1,2,2,3 };
    result = s.smallerNumbersThanCurrent(nums);
    for (double r : result) {
        cout << r << endl;
    }*/
}

