#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    bool isPowerOfThree(int n) {
        if (n <= 0) {
            return false;
        }
        while (n > 3) {
            if (n % 3 != 0) {
                return false;
            }
            n = n / 3;
        }
        if (n == 1 || n == 3) {
            return true;
        }
        else {
            return false;
        }
    }
};

int main()
{
    Solution s;
    cout << s.isPowerOfThree(1);
    cout << s.isPowerOfThree(2);
    cout << s.isPowerOfThree(3);
    cout << s.isPowerOfThree(4);

    
    /*while (r != nullptr) {
        cout << r->val << endl;
        r = r->next;
    }*/
   /* vector<bool> result;
    vector<int> nums = { 8,1,2,2,3 };
    result = s.intToRoman(nums);
    for (double r : result) {
        cout << r << endl;
    }*/
}

