#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> result;
        int max = 0;
        for (int i = 0; i < candies.size(); i++) {
            if (max < candies[i]) {
                max = candies[i];
            }
        }

        for (int i = 0; i < candies.size(); i++) {
            if (max <= candies[i] + extraCandies) {
                result.push_back(true);
            }
            else {
                result.push_back(false);
            }
        }
        return result;
    }
};

int main()
{
    Solution s;
    vector<int> candies = { 2, 3, 5, 1, 3 };
    s.kidsWithCandies(candies, 3);
}

