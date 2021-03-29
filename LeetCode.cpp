#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min_price = INT_MAX;
        int reward = 0;
        for (int i = 0; i < prices.size(); i++) {
            if (min_price > prices[i]) {
                min_price = prices[i];
            }
            else if (prices[i] - min_price > reward) {
                reward = prices[i] - min_price;
            }
        }
        return reward;
    }
};

int main()
{
    Solution s;
    vector<int> prices = { 7,6,5,4,3,2,1 };
    cout << s.maxProfit(prices);
    /*vector<double> result;
    result = s.averageOfLevels(five);
    for (double r : result) {
        cout << r << endl;
    }*/
}

