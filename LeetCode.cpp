#include <iostream>
#include <stack>

using namespace std;

class Solution {
public:
    string reverseVowels(string s) {
        int left = 0, right = s.length() - 1;
        while (left < right) {
            while ((left < right) && s[left] != 'a' && s[left] != 'e' && s[left] != 'i' && s[left] != 'o' && s[left] != 'u' && s[left] != 'A' && s[left] != 'E' && s[left] != 'I' && s[left] != 'O' && s[left] != 'U') {
                left++;
            }

            while ((left < right) && s[right] != 'a' && s[right] != 'e' && s[right] != 'i' && s[right] != 'o' && s[right] != 'u' && s[right] != 'A' && s[right] != 'E' && s[right] != 'I' && s[right] != 'O' && s[right] != 'U') {
                right--;
            }
            if (left < right) {
                s[left] ^= s[right];
                s[right] ^= s[left];
                s[left] ^= s[right];
            }
            
            left++;
            right--;
        }
        return s;
    }
};

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    Solution s;
    cout << s.reverseVowels("aA");
    return 0;
}
