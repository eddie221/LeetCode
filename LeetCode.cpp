#include <iostream>
#include <vector>
#include <string>


using namespace std;


class Solution {
public:
    bool canWinNim(int n) {
        if (n <= 3) {
            return true;
        }
        if (n % 4 == 0) {
            return false;
        }
        return true;
    }
};

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    Solution s;
    cout << s.canWinNim(15) << endl;;
    return 0;
}
