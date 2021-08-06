#include <iostream>
#include <vector>
#include <stack>

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
    TreeNode* invertTree(TreeNode* root) {
        TreeNode* result = root;
        if (root != nullptr) {
            TreeNode* tmp = root->left;
            result->left = result->right;
            result->right = tmp;
            invertTree(result->left);
            invertTree(result->right);
        }
        return result;
    }
};


int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    TreeNode* root = new TreeNode(1, new TreeNode(2, new TreeNode(4), new TreeNode(5)), new TreeNode(3));
    Solution s;
    TreeNode* r = s.invertTree(root);
    cout << r->val << endl;
    return 0;
}
