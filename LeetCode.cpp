#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int index = 0;
        if (ruleKey == "color") {
            index = 1;
        }
        else if (ruleKey == "name") {
            index = 2;
        }
        int count = 0;
        for (int i = 0; i < items.size(); i++) {
            if (items[i][index] == ruleValue) {
                count++;
            }
        }
        return count;
    }
};

int main()
{
    Solution s;
    vector<vector<string>> items = {{"phone","blue","pixel" }, { "computer","silver","lenovo" }, { "phone","gold","iphone" }};
    cout << s.countMatches(items, "color", "silver");
}

