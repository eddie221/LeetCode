#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        vector<int> container;
        for (int i = 0; i < s.size(); i++) {
            if ((s[i] >= 'a' && s[i] <= 'z')) {
                container.push_back(s[i]);
            }
            else if (s[i] >= 'A' && s[i] <= 'Z') {
                container.push_back(s[i] - 'A' + 'a');
            }
            if (s[i] >= '0' && s[i] <= '9') {
                container.push_back(s[i]);
            }
        }

        for (int i = 0; i < container.size() / 2; i++) {
            if (container[i] != container[container.size() - i - 1]) {
                return false;
            }
        }
        
        return true;
    }
};

int main()
{
    Solution s;
    s.isPalindrome("A man, a plan, a canal: Panama");
    
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

