#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    int secondHighest(string s) {
        int first_large = -1;
        int second_large = -1;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] >= 48 && s[i] <= 57) {
                if (second_large < s[i] - 48) {
                    if (first_large < s[i] - 48) {
                        second_large = first_large;
                        first_large = s[i] - 48;
                        
                    }
                    else if(first_large != s[i] - 48){
                        second_large = s[i] - 48;
                    }
                }
            }
        }
        return second_large;
    }
};

int main()
{
    Solution s;
    cout << s.secondHighest("abc1111");
}

