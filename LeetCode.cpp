#include <iostream>
#include <bitset>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    int ans = 1;
    int dfs(TreeNode* head) {  
        if (head == nullptr) {
            return 0;
        }
        int left_h = dfs(head->left);
        int right_h = dfs(head->right);
        if (abs(left_h - right_h) > 1) {
            ans = 0;
            return 0;
        }
        return max(left_h, right_h) + 1;
    }

    bool isBalanced(TreeNode* root) {
        dfs(root);
        return ans;
    }
};

int main()
{
    Solution s;
    TreeNode* head = new TreeNode(1, new TreeNode(2, new TreeNode(3, new TreeNode(4), new TreeNode(4)), new TreeNode(3)), new TreeNode(2));
    cout << s.isBalanced(head) << endl;
    /* vector<bool> result;
     vector<int> nums = { 8,1,2,2,3 };
     result = s.intToRoman(nums);
     for (double r : result) {
         cout << r << endl;
     }*/
}