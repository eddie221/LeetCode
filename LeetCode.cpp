#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    bool detectCapitalUse(string word) {
        bool capital = false;
        if (word[0] >= 'A' && word[0] <= 'Z') {
            if (word[1] >= 'A' && word[1] <= 'Z') {
                capital = true;
            }
        }
        else {
            if (word[1] >= 'A' && word[1] <= 'Z') {
                return false;
            }
        }
        for (int i = 2; i < word.length(); i++) {
            if (capital && (word[i] >= 'a' && word[i] <= 'z')) {
                return false;
            }
            if (!capital && (word[i] >= 'A' && word[i] <= 'Z')) {
                return false;
            }
        }
        return true;
    }
};

int main()
{
    Solution s;
    cout << s.detectCapitalUse("USA");
}

