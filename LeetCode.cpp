#include <iostream>
#include <map>
#include <vector>

using namespace std;

class Solution {
public:
    string defangIPaddr(string address) {
        string result = "";
        for (int i = 0; i < address.length(); i++) {
            if (address[i] == '.') {
                result += "[.]";
            }
            else {
                result += address[i];
            }
        }
        return result;
    }
};

int main()
{
    Solution s;
    cout << s.defangIPaddr("1.1.1.1");
}

