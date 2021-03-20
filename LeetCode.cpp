#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carry = 0;
        for (int i = digits.size() - 1; i >= 0; i--) {
            if (i == digits.size() - 1) {
                carry = (digits[i] + 1) / 10;
                digits[i] = (digits[i] + 1) % 10;
            }
            else {
                int sum = (digits[i] + carry);
                carry = sum / 10;
                digits[i] = sum % 10;
            }
        }
        if (carry != 0) {
            digits.insert(digits.begin(), carry);
        }
        return digits;
    }
};

int main()
{
    Solution s;
    vector<int> digits = { 9, 9, 9 };
    digits = s.plusOne(digits);
    for (int i = 0; i < digits.size(); i++) {
        cout << digits[i];
    }
}

