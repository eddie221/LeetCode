#include <iostream>

using namespace std;

class Solution {
public:
    int countPrimes(int n) {
        int count = 0;
        for (int i = 2; i < n; i++) {
            bool prime = true;
            if (i % 2 == 0 && i != 2) {
                prime = false;
            }
            else {
                for (int j = 3; j * j <= i; j += 2) {
                    if (i % j == 0) {
                        prime = false;
                        break;
                    }
                }
            }
            if (prime) {
                count++;
            }
        }

        return count;
    }
};

int main()
{
    Solution s;
    cout << s.countPrimes(10);
}

