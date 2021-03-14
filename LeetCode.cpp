#include <iostream>
#include <map>
#include <vector>

using namespace std;

class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        bool climb = true;
        if (arr.size() < 3) {
            return false;
        }
        for (int i = 1; i < arr.size(); i++) {
            if (climb) {
                if (arr[i] < arr[i - 1]) {
                    if (i == 1) {
                        return false;
                    }
                    else {
                        climb = false;
                    }
                }
                if (arr[i] == arr[i - 1]) {
                    return false;
                }
            }
            else {
                if (arr[i] >= arr[i - 1]) {
                    return false;
                }
            }
        }
        if (climb) {
            return false;
        }
        else {
            return true;
        }
    }
};
int main()
{
    Solution s;
    vector<int> arr = { 2, 1 };
    cout << s.validMountainArray(arr);
}

