#include <iostream>
#include <vector>
#include <stack>

using namespace std;

class Solution {
public:
    string addStrings(string num1, string num2) {
        string result = "";
        int i = num1.length() - 1, j = num2.length() - 1, carry = 0, reset = 0;
        while (i >= 0 && j >= 0) {
            reset = (num1[i] - '0' + num2[j] - '0' + carry) % 10 + '0';
            carry = (num1[i] - '0' + num2[j] - '0' + carry) / 10;
            result = result + (char)reset;
            i--;
            j--;
        }
        cout << result << endl;
        while (carry != 0 && (i >= 0 || j >= 0)) {
            if (i >= 0) {
                reset = (num1[i] - '0' + carry) % 10 + '0';
                carry = (num1[i] - '0' + carry) / 10;
                result = result + (char)reset;
                i--;
            }
            else if(j >= 0){
                reset = (num2[j] - '0' + carry) % 10 + '0';
                carry = (num2[j] - '0' + carry) / 10;
                result = result + (char)reset;
                j--;
            }
        }
        while (i >= 0) {
            result = result + num1[i];
            i--;
        }
        while (j >= 0) {
            result = result + num2[j];
            j--;
        }
        if (carry != 0) {
            result = result + "1";
        }
        reverse(result.begin(), result.end());
        return result;
    }
};

int main()
{
    Solution s;
    /*TreeNode* root = new TreeNode(3, new TreeNode(4, new TreeNode(1), new TreeNode(2)), new TreeNode(5));
    TreeNode* subtree = new TreeNode(4, new TreeNode(1), new TreeNode(2));*/
    cout << s.addStrings("9999", "1") << endl;
    /* vector<bool> result;
     vector<int> nums = { 8,1,2,2,3 };
     result = s.intToRoman(nums);
     for (double r : result) {
         cout << r << endl;
     }*/
}