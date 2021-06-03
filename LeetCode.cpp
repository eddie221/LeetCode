#include <iostream>
#include <vector>
#include <unordered_set>
#include <string>

using namespace std;

class Solution {
public:
    int subtractProductAndSum(int n) {
        int product = 1;
        int sum = 0;
        while (n != 0) {
            product = product * (n % 10);
            sum += (n % 10);
            n = n / 10; 
        }
        return product - sum;
    }
};

int main()
{
    Solution s;
    cout << s.subtractProductAndSum(9999);
    /* vector<bool> result;
     vector<int> nums = { 8,1,2,2,3 };
     result = s.intToRoman(nums);
     for (double r : result) {
         cout << r << endl;
     }*/
}