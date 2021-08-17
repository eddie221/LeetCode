#include <iostream>
#include <vector>
#include <string>

using namespace std;

class NumArray {
public:
    vector<int> cumulate;
    NumArray(vector<int>& nums) {
        int last = 0;
        for (int i = 0; i < nums.size(); i++) {
            cumulate.push_back(nums[i] + last);
            last = cumulate[i];
        }
    }

    int sumRange(int left, int right) {
        if (left == 0) {
            return cumulate[right];
        }
        return cumulate[right] - cumulate[left - 1];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    vector<int> nums = { -2, 0, 3, -5, 2, -1 };
    NumArray* obj = new NumArray(nums);
    cout << obj->sumRange(0, 2) << endl;
    cout << obj->sumRange(2, 5) << endl;
    cout << obj->sumRange(0, 5) << endl;
    return 0;
}
