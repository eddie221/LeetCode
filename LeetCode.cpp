#include <iostream>
#include <algorithm>
#include <set>

using namespace std;

class Solution {
public:
    bool isHappy(int n) {
        set<int> record;
        while (n != 1) {
            int tmp = 0;
            while (n / 10 != 0) {
                tmp = pow(n % 10, 2) + tmp;
                n = n / 10;
            }
            n = pow(n, 2) + tmp;
            if (record.find(n) == record.end()) {
                record.insert(n);
            }
            else {
                return false;
            }
        }
        return true;
    }
};

int main()
{
    Solution s;

    cout << s.isHappy(2);
}

