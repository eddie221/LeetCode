#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int result = 0;
        for (int start = 0, end = 0, flip = 0; end < nums.size(); end++) {
            if(!nums[end]){
                flip++;
            }

            while (flip > k) {
                if (!nums[start]) {
                    flip--;
                }
                start++;
            }
            result = max(result, end - start + 1);
        }
        return result;
    }
};

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    Solution s;
    vector<int> nums = { 0, 0, 0 ,1 };
    cout << s.longestOnes(nums, 4) << endl;

    return 0;
}
