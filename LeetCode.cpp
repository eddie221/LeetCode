#include <iostream>

using namespace std;

class Solution {
public:
    bool checkPerfectNumber(int num) {
        int sum = 0;
        if (num == 1) {
            return false;
        }
        for (int i = 1; i * i <= num; i++) {
            if (num % i == 0) {
                sum = sum + i;
                if (i * i != num) {
                    sum = sum + num / i;
                }
            }
        }
        return sum - num == num;
    }
};

int main()
{
    Solution s;
    
    cout << s.checkPerfectNumber(1);
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

