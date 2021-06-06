#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    int maxRepeating(string sequence, string word) {
        int count = 0, max_count = 0;
        for (int i = 0, j = 0; i < sequence.length(); i++) {
            count = 0;
            while (i + word.length() * count < sequence.length() && sequence.substr(i + word.length() * count, word.length()) == word) {
                count++;
            }
            //i = i + word.length() * count;
            if (max_count < count) {
                max_count = count;
            }
        }
        return max_count;
    }
};

int main()
{
    Solution s;
    cout << s.maxRepeating("aaabaaaabaaabaaaabaaaabaaaabaaaaba", "aaaba");
    /* vector<bool> result;
     vector<int> nums = { 8,1,2,2,3 };
     result = s.intToRoman(nums);
     for (double r : result) {
         cout << r << endl;
     }*/
}