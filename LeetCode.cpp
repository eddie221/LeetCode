#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    bool checkIfExist(vector<int>& arr) {

        for (int i = 0; i < arr.size(); i++) {
            if (find(arr.begin(), arr.end(), arr[i] * 2) != arr.end() && find(arr.begin(), arr.end(), arr[i] * 2) - arr.begin() != i) {
                return true;
            }
        }
        return false;
    }
};

int main()
{
    Solution s;
    vector<int> arr = { -2,0,10,-19,4,6,-8 };
    cout << s.checkIfExist(arr);
    /*while (r != nullptr) {
        cout << r->val << endl;
        r = r->next;
    }*/
    /*vector<int> result;
    vector<int> nums = { 8,1,2,2,3 };
    result = s.smallerNumbersThanCurrent(nums);
    for (double r : result) {
        cout << r << endl;
    }*/
}

