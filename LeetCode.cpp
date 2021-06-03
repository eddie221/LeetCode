#include <iostream>
#include <vector>
#include <unordered_set>
#include <string>

using namespace std;

class Solution {
public:
    int numDifferentIntegers(string word) {
        unordered_set<string> store;
        bool number = false;
        for (int i = 0, j = 0; i < word.length();i = ++j) {
            while (isdigit(word[j])) {
                j++;
            }

            while (word[i] == '0' && i + 1 < j) {
                i++;
            }
            if (i < j) {
                string s = word.substr(i, j - i);
                store.insert(s);
            }
            
        }

        return store.size();
    }
};

int main()
{
    Solution s;
    cout << s.numDifferentIntegers("0a0");
    /* vector<bool> result;
     vector<int> nums = { 8,1,2,2,3 };
     result = s.intToRoman(nums);
     for (double r : result) {
         cout << r << endl;
     }*/
}