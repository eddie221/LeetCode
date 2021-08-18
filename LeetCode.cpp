#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        sort(ransomNote.begin(), ransomNote.end());
        sort(magazine.begin(), magazine.end());

        for (int i = 0, j = 0; i < ransomNote.size() && j < magazine.size();) {
            while (i < ransomNote.size() && j < magazine.size() && ransomNote[i] == magazine[j]) {
                i++;
                j++;
            }
            while (j < magazine.size() && magazine[j] < ransomNote[i]) {
                j++;
            }
            if (magazine[j] != ransomNote[i] && i != ransomNote.size()) {
                return false;
            }
        }
        return true;
    }
};

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    Solution s;
    vector<int> nums1 = {4, 9, 5};
    vector<int> nums2 = { 9,4,9,8,4 };
    cout << s.canConstruct("b", "a");
    return 0;
}
