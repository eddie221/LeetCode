#include <iostream>
#include <vector>
#include <map>

using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int, bool> check_list;
        for (int i = 0; i < nums.size(); i++) {
            if (!check_list[nums[i]]) {
                check_list[nums[i]] = true;
            }
            else {
                return true;
            }
        }
        return false;
    }
};

int main()
{
    Solution s;
    vector<int> num = { 1, 2, 3, 1 };
    cout << s.containsDuplicate(num);
}

