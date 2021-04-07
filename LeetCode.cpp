#include <iostream>

using namespace std;

class Solution {
public:
    int maxScore(string s) {
        int* zero = new int[s.length()], *one = new int[s.length()];
        zero[0] = 0;
        one[s.length() - 1] = 0;

        if (s[0] == '0') {
            zero[0] = 1;
        }
        else {
            zero[0] = 0;
        }
        if (s[s.length() - 1] == '0') {
            one[s.length() - 1] = 0;
        }
        else {
            one[s.length() - 1] = 1;
        }

        for (int i = 1; i < s.length() - 1; i++) {
            if (s[i] == '0') {
                zero[i] = zero[i - 1] + 1;
            }
            else {
                zero[i] = zero[i - 1];
            }
            
            if (s[s.length() - i - 1] == '0') {
                one[s.length() - i - 1] = one[s.length() - i];
            }
            else {
                one[s.length() - i - 1] = one[s.length() - i] + 1;
            }
        }
        zero[s.length() - 1] = 0;
        one[0] = 0;
        int result = 0;

        for (int i = 0; i < s.length(); i++) {
            cout << zero[i] << " " << one[i] << endl;

            if (result < zero[i] + one[i]) {
                result = zero[i] + one[i];
            }
        }
        return result;
    }
};

int main()
{
    Solution s;
    
    cout << s.maxScore("00");
    /*while (r != nullptr) {
        cout << r->val << endl;
        r = r->next;
    }*/
    /*vector<int> result;
    vector<int> nums = { 8,1,2,2,3 };
    result = s.smallerNumbersThanCurrent(nums);
    for (double r : result) {
        cout << r << endl;
    }*/
}

