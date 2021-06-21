#include <iostream>
#include <bitset>
#include <vector>
#include <map>

using namespace std;

int guess(int num) {
    if (num > 6) {
        return -1;
    }
    else if (num < 6) {
        return 1;
    }
    else {
        return 0;
    }
}

class Solution {
public:
    int guessNumber(int n) {
        long int left = 1, right = n, middle = (1 + n) / 2;
        if (guess(left) == 0) {
            return left;
        }
        else if (guess(right) == 0) {
            return right;
        }

        while (guess(middle) != 0) {
            switch (guess(middle)) {
            case -1:
                right = middle;
                break;
            case 1:
                left = middle;
                break;
            case 0:
                return middle;
            }
            middle = (left + right) / 2;
        }
        return middle;
    }
};

int main()
{
    Solution s;
    cout << s.guessNumber(10) << endl;
    /* vector<bool> result;
     vector<int> nums = { 8,1,2,2,3 };
     result = s.intToRoman(nums);
     for (double r : result) {
         cout << r << endl;
     }*/
}