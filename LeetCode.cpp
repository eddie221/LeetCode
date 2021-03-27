#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int tribonacci(int n) {
        int* result;
        if (n > 3) {
            result = new int[n + 1];
        }
        else {
            result = new int[3];
        }
        
        result[0] = 0;
        result[1] = 1;
        result[2] = 1;
        for (int i = 3; i <= n; i++) {
            result[i] = result[i - 1] + result[i - 2] + result[i - 3];
        }
        return result[n];

    }
};

int main()
{
    Solution s;
    cout << s.tribonacci(25);
    /*result = s.decompressRLElist(nums);
    for (int r : result) {
        cout << r << endl;
    }*/
}

