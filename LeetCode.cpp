#include <iostream>
#include <bitset>
#include <vector>
#include <map>

using namespace std;

class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {
        string tmp = "";
        int max = 0;
        map<string, int> count;
        for (int i = 0; i < paragraph.length(); i++) {
            while (paragraph[i] == ' ' || paragraph[i] == ',' || paragraph[i] == '?' || paragraph[i] == '!' || paragraph[i] == '.' || paragraph[i] == ';' || paragraph[i] == '\'') {
                if (find(banned.begin(), banned.end(), tmp) == banned.end() && tmp != "") {
                    count[tmp] += 1;
                }
                tmp = "";
                i++;
            }
            tmp += paragraph[i] | 32;
        }
        for(map<string, int>::iterator iter = count.begin(); iter != count.end(); iter++){
            if (max < iter->second) {
                max = iter->second;
                tmp = iter->first;
            }
        }
        return tmp;
    }
};

int main()
{
    Solution s;
    string paragraph = "Bob hit a ball, the hit BALL flew far after it was hit.";
    vector<string> banned = {""};
    cout << s.mostCommonWord("a", banned) << endl;
    /* vector<bool> result;
     vector<int> nums = { 8,1,2,2,3 };
     result = s.intToRoman(nums);
     for (double r : result) {
         cout << r << endl;
     }*/
}