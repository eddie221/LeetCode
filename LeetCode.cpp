#include <iostream>

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
    bool hasPathSum(TreeNode* root, int targetSum) {
        if (root == nullptr) {
            return false;
        }
        else if (root != nullptr && root->right == root->left) {
            return root->val == targetSum;
        }
        else {
            return hasPathSum(root->left, targetSum - root->val) || hasPathSum(root->right, targetSum - root->val);
        }
    }
};

int main()
{
    Solution s;
    TreeNode *seven = new TreeNode(7);
    TreeNode* two = new TreeNode(2);
    TreeNode* eleven = new TreeNode(11, seven, two);
    TreeNode* four = new TreeNode(4, eleven, nullptr);

    TreeNode* one = new TreeNode(1);
    TreeNode* four2 = new TreeNode(4, nullptr, one);
    TreeNode* thirteen = new TreeNode(13);
    TreeNode* eight = new TreeNode(8, thirteen, four);

    TreeNode* five = new TreeNode(5, four, eight);
    cout << s.hasPathSum(five, 22);
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

