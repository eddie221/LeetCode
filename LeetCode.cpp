#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int price = 0;
        int i = 0;
        int min = 0, max = 0;
        while (i < prices.size() - 1) {
            while (i < prices.size() - 1 && prices[i + 1] <= prices[i]) {
                i++;
            }
            min = prices[i];
            while (i < prices.size() - 1 && prices[i + 1] >= prices[i]) {
                i++;
            }
            max = prices[i];
            price += max - min;
        }
        return price;
    }
};

int main()
{
    Solution s;
    vector<int> price = { 7,1,5,3,6,4 };
    cout << s.maxProfit(price);

    /*for (int i = 0; i < r.size(); i++) {
        for (int j = 0; j < r[i].size(); j++) {
            cout << r[i][j] << " ";
        }
        cout << endl;
    }*/
    
    /* vector<bool> result;
     vector<int> nums = { 8,1,2,2,3 };
     result = s.intToRoman(nums);
     for (double r : result) {
         cout << r << endl;
     }*/
}