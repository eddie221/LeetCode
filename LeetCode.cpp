#include <iostream>
#include <stack>
#include <string>

using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> container;
        for (int i = 0; i < s.length(); i++) {
            if (container.empty()) {
                container.push(s[i]);
            }
            else {
                if (container.top() == '(' && s[i] == ')' || container.top() == '[' && s[i] == ']' || container.top() == '{' && s[i] == '}') {
                    container.pop();
                }
                else {
                    container.push(s[i]);
                }
            }
        }

        if (container.empty()) {
            return true;
        }
        else {
            return false;
        }
    }
};

int main()
{
    Solution s;
    cout << s.isValid("()[]{}");
}

