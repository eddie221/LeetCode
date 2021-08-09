#include <iostream>
#include <vector>
#include <map>

using namespace std;


class Solution {
public:
    string interpret(string command) {
        string result = "";
        for (int i = 0; i < command.length(); i++) {
            if(command[i] == '(' && command[i + 1] == ')'){
                result = result + 'o';
            }
            else if (command[i] == '(' && command[i + 1] == 'a') {
                result = result + "al";
                i += 3;
            }
            else if (command[i] == 'G') {
                result = result + "G";
            }
        }
        return result;
    }
};


int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    Solution s;
    cout << s.interpret("G()()()()(al)");
    return 0;
}
