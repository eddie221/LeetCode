#include <iostream>

using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
        int count = 0;
        bool word = false;
        for (int i = s.length() - 1; i >= 0; i--) {
            if (s[i] != ' ') {
                word = true;
                count++;
            }
            else if (s[i] == ' ' && word) {
                break;
            }
        }
        return count;
    }
};

int main()
{
    Solution s;
    string str = "Hello World";
    cout << s.lengthOfLastWord(str);
}

