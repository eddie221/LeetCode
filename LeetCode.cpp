#include <iostream>
#include <unordered_set>
#include <string>
#include <unordered_map>
#include <sstream> 

using namespace std;

class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char, string> _map;
        unordered_set<string> ss;
        stringstream st(s);
        string word;
        int i = 0;
        while (st >> word) {
            if (_map.find(pattern[i]) != _map.end()) {
                if (_map[pattern[i]] != word) {
                    return false;
                }
            }
            else {
                if (ss.find(word) != ss.end()) {
                    return false;
                }
                _map[pattern[i]] = word;
                ss.insert(word);
            }
            i++;
        }
        if (i != pattern.length()) {
            return false;
        }
        return true;
        //vector<string> s_v;
        //map<string, char> idx;
        //map<char, string> idx2;
        //string tmp = "";
        //// store s to vector
        //for (int i = 0; i < s.size(); i++) {
        //    if (s[i] == ' ') {
        //        s_v.push_back(tmp);
        //        tmp = "";
        //    }
        //    else {
        //        tmp = tmp + s[i];
        //    }
        //}
        //s_v.push_back(tmp);
        //if (s_v.size() != pattern.length()) {
        //    return false;
        //}
        //for (int i = 0; i < s_v.size(); i++) {
        //    if (idx[s_v[i]] == 0 && idx2[pattern[i]] == "") {
        //        idx[s_v[i]] = pattern[i];
        //        idx2[pattern[i]] = s_v[i];
        //    }
        //    else {
        //        if (idx[s_v[i]] != pattern[i] || idx2[pattern[i]] != s_v[i]) {
        //            return false;
        //        }
        //    }
        //}

        //return true;
    }
};

int main()
{
    Solution s;
    cout << s.wordPattern("dog", "dog");
    /* vector<bool> result;
     vector<int> nums = { 8,1,2,2,3 };
     result = s.intToRoman(nums);
     for (double r : result) {
         cout << r << endl;
     }*/
}