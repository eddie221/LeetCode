#include <iostream>
#include <vector>
#include <algorithm>
#include <map>


using namespace std;

class Solution {
public:
    int countLargestGroup(int n) {
        int count[37] = { 0 };
        for (int i = 1; i <= n; i++) {
            int sum = 0, num = i;
            while (num != 0) {
                sum += num % 10;
                num = num / 10;
            }
            count[sum]++;
        }
        sort(count, count + 27);
        reverse(count, count + 27);
        int max = count[0], result = 1;
        for (int i = 1; i < 27; i++) {
            if (max == count[i]) {
                result++;
            }
            else {
                break;
            }
        }

        return result;
    }
};

int main()
{
    Solution s;
    cout << s.countLargestGroup(13);
    /* vector<bool> result;
     vector<int> nums = { 8,1,2,2,3 };
     result = s.intToRoman(nums);
     for (double r : result) {
         cout << r << endl;
     }*/
}