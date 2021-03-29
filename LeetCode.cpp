#include <iostream>
#include <vector>

using namespace std;


class Solution {
public:
    int trailingZeroes(int n) {
        int result = 0;
        while (n / 5 != 0) {
            result = n / 5 + result;
            n = n / 5;
        }
        return result;
    }
};

int main()
{
    Solution s;
    cout << s.trailingZeroes(5);
    /*vector<double> result;
    result = s.averageOfLevels(five);
    for (double r : result) {
        cout << r << endl;
    }*/
}

