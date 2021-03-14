#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int legal_place = 0;
        if (flowerbed.size() == 1) {
            if (flowerbed[0] == 0 && n == 1 || n == 0) {
                return true;
            }
            else {
                return false;
            }
        }
        for (int i = 0; i < flowerbed.size(); i++) {
            if (flowerbed[i] == 0) {
                if (i - 1 >= 0 && i + 1 < flowerbed.size()) {
                    if (flowerbed[i - 1] == 0 && flowerbed[i + 1] == 0) {
                        flowerbed[i] = 1;
                        legal_place++;
                    }
                }
                else if (i - 1 < 0) {
                    if (flowerbed[i + 1] == 0) {
                        flowerbed[i] = 1;
                        legal_place++;
                    }
                }
                else if (i + 1 >= flowerbed.size()) {
                    if (flowerbed[i - 1] == 0) {
                        flowerbed[i] = 1;
                        legal_place++;
                    }
                }
            }
        }
        if (legal_place >= n) {
            return true;
        }
        else {
            return false;
        }
    }
};

int main()
{
    Solution s;
    vector<int> nums = { 1,0,0,0,1 };
    cout << s.canPlaceFlowers(nums, 1);
}

