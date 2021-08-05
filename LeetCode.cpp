#include <iostream>
#include <vector>
#include <stack>

using namespace std;


class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left = 0, right = numbers.size() - 1;
        while (left < right) {
            if (numbers[left] + numbers[right] > target) {
                right--;
            }
            else if (numbers[left] + numbers[right] < target) {
                left++;
            }
            else {
                break;
            }
        }
        return { left + 1, right + 1 };
    }
};


int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    Solution s;
    vector<int> numbers = { 2,7,11,15 };
    vector<int> r = s.twoSum(numbers, 9);
    for (int i = 0; i < r.size(); i++) {
        cout << r[i] << endl;
    }
    return 0;
}
