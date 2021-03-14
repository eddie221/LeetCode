#include <iostream>
#include <math.h>

using namespace std;


class Solution {
public:
    string convertToTitle(int n) {
        string result = "";
        n--;
        while(n >= 0){
            char tmp = 'A' + n % 26;
            result = tmp + result;
            n = n / 26;
            n--;
        }
        return result;
    }
};

int main()
{
    Solution s;
    cout << s.convertToTitle(701);
}

