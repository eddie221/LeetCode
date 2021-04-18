#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    void reverseString(vector<char>& s) {
        for (int i = 0; i < s.size() / 2; i++) {
            s[i] = s[s.size() - i - 1] ^ s[i];
            s[s.size() - i - 1] = s[s.size() - i - 1] ^ s[i];
            s[i] = s[s.size() - i - 1] ^ s[i];
        }
    }
};

int main()
{
    Solution s;
    vector<char> cs = {'h','e','l','l','o' };
    s.reverseString(cs);
    for (int i = 0; i < cs.size(); i++) {
        cout << cs[i] << endl;
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

