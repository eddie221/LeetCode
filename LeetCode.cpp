#include <iostream>
#include <bitset>

using namespace std;

class Solution {
public:
    string toHex(int num) {
        string result = "";
        bitset<32> num_bit(num);
        while (num_bit.any()) {
            bitset<32> mask("1111");
            cout << (num_bit & mask).to_ulong() << endl;
            if ((num_bit & mask).to_ulong() <= 9) {
                result = (char)((num_bit & mask).to_ulong() + '0') + result;
            }
            else {
                result = (char)((num_bit & mask).to_ulong() - 10 + 'a') + result;
            }
            num_bit = num_bit >> 4;
        }
        if (result == "") {
            return "0";
        }
        return result;
    }
};

int main()
{
    Solution s;
    /*TreeNode* root = new TreeNode(3, new TreeNode(4, new TreeNode(1), new TreeNode(2)), new TreeNode(5));
    TreeNode* subtree = new TreeNode(4, new TreeNode(1), new TreeNode(2));*/
    cout << s.toHex(-1) << endl;
    /* vector<bool> result;
     vector<int> nums = { 8,1,2,2,3 };
     result = s.intToRoman(nums);
     for (double r : result) {
         cout << r << endl;
     }*/
}