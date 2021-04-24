#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string>r;
        for (int i = 1; i <= n; i++) {
            if (i % 3 == 0 && i % 5 == 0) {
                r.push_back("FizzBuzz");
            }
            else if (i % 3 == 0) {
                r.push_back("Fizz");
            }
            else if (i % 5 == 0) {
                r.push_back("Buzz");
            }
            else {
                r.push_back(to_string(i));
            }
        }
        return r;
    }
};

int main()
{
    Solution s;
    vector<string> r = s.fizzBuzz(15);
    for (int i = 0; i < r.size(); i++) {
        cout << r[i] << endl;
    }
    /*while (r != nullptr) {
        cout << r->val << endl;
        r = r->next;
    }*/
   /* vector<bool> result;
    vector<int> nums = { 8,1,2,2,3 };
    result = s.intToRoman(nums);
    for (double r : result) {
        cout << r << endl;
    }*/
}

