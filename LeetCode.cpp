#include <iostream>
#include <math.h>

using namespace std;

class Solution {
public:
    int mySqrt(int x) {
        return int(sqrt(x));
    }
};

int main()
{
    Solution s;
    cout << s.mySqrt(4);
}

