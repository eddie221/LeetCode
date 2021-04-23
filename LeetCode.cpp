#include <iostream>
#include <algorithm>

using namespace std;

class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int count = 0;
        sort(stones.begin(), stones.end());
        sort(jewels.begin(), jewels.end());
        cout << stones << endl;
        for (int i = 0, j = 0; i < jewels.size() && j < stones.size();) {
            if (jewels[i] > stones[j]) {
                j++;
            }
            else if (jewels[i] < stones[j]) {
                i++;
            }
            else{
                while (jewels[i] == stones[j]) {
                    count++;
                    j++;
                }
                i++;
            }
        }
        return count;
    }
};

int main()
{
    Solution s;
    cout << s.numJewelsInStones("aA", "aAAbbbb");
    
    /*while (r != nullptr) {
        cout << r->val << endl;
        r = r->next;
    }*/
   /* vector<bool> result;
    vector<int> nums = { 8,1,2,2,3 };
    result = s.intToRoman(nums);
    for (double r : result) {
        cout << r << endl;
    }*/
}

