#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    bool judgeCircle(string moves) {
        int r = 0, d = 0;
        for (int i = 0; i < moves.length(); i++) {
            switch (moves[i]) {
            case 'R':
                r += 1;
                break;
            case 'L':
                r -= 1;
                break;
            case 'U':
                d -= 1;
                break;
            case 'D':
                d += 1;
                break;
            }
        }
        if (r == 0 && d == 0) {
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
    cout << s.judgeCircle("UD");
}

