#include <iostream>
#include <vector>
#include <string>


using namespace std;


class Solution {
public:
    int addDigits(int num) {
        
        while (num / 10 != 0) {
            int tmp = num, sum = 0;
            while (tmp / 10 != 0) {
                sum += tmp % 10;
                tmp = tmp / 10;
            }
            sum = tmp + sum;
            num = sum;
        }
        return num;
    }
};

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    Solution s;
    cout << s.addDigits(38) << endl;;
    return 0;
}
