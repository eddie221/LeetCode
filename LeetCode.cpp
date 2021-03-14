#include <iostream>
#include <map>

using namespace std;

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<char, int> s_count;
        map<char, int> t_count;

        for (int i = 0; i < s.length(); i++) {
            if (s_count[s[i]] != t_count[t[i]]) {
                return false;
            }
            s_count[s[i]] = i + 1;
            t_count[t[i]] = i + 1;
        }

        return true;

    }
};

int main()
{
    Solution s;
    cout << s.isIsomorphic("egg", "add");
}

