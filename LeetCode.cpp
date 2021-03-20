#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    string addBinary(string a, string b) {
        string result = "";
        bool carry = false;
        for (int i = 0; i < a.length() || i < b.length(); i++) {
            if(a.length() > i && b.length() > i){
                if (a[a.length() - i - 1] == '1' && b[b.length() - i - 1] == '1') {
                    if (carry) {
                        result = '1' + result;
                    }
                    else {
                        result = '0' + result;
                    }
                    carry = true;
                }
                else if (a[a.length() - i - 1] == '1' || b[b.length() - i - 1] == '1') {
                    if (carry) {
                        result = '0' + result;
                    }
                    else {
                        result = '1' + result;
                    }
                }
                else{
                    if (carry) {
                        result = '1' + result;
                    }
                    else {
                        result = '0' + result;
                    }
                    carry = false;
                }
            }
            else if (a.length() > i) {
                if (a[a.length() - i - 1] == '1' && carry) {
                    result = '0' + result;
                }
                else if(a[a.length() - i - 1] == '0' && carry){
                    result = '1' + result;
                    carry = false;
                }
                else {
                    result = a[a.length() - i - 1] + result;
                }
            }
            else if (b.length() > i) {
                if (b[b.length() - i - 1] == '1' && carry) {
                    result = '0' + result;
                }
                else if (b[b.length() - i - 1] == '0' && carry) {
                    result = '1' + result;
                    carry = false;
                }
                else {
                    result = b[b.length() - i - 1] + result;
                }
            }
        }
        if (carry) {
            result = "1" + result;
        }
        return result;
    }
};

int main()
{
    Solution s;
    cout << s.addBinary("10", "101111");
}

