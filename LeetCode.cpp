#include <iostream>
#include <queue>

using namespace std;

class Solution {
public:
    bool isPerfectSquare(int num) {
        for (long long i = 1; i <= num / 2 + 1; i++) {
            if (i * i == num) {
                return true;
            }
        }
        return false;
    }
};

int main()
{
    Solution s;
    
    cout << s.isPerfectSquare(16);
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

