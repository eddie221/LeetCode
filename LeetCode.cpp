#include <iostream>
#include <vector>
#include <map>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
    TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if (root == nullptr) {
            return nullptr;
        }
        else if (root->val < q->val && root->val < p->val) {
            return lowestCommonAncestor(root->right, p, q);
        }
        else if (root->val > q->val && root->val > p->val) {
            return lowestCommonAncestor(root->left, p, q);
        }
        return root;
    }
};


int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    Solution s;
    TreeNode* root = new TreeNode(6,
        new TreeNode(2,
            new TreeNode(0),
            new TreeNode(4,
                new TreeNode(3),
                new TreeNode(5))),
        new TreeNode(8,
            new TreeNode(7),
            new TreeNode(9)));
    cout << s.lowestCommonAncestor(root, new TreeNode(2), new TreeNode(8))->val;
    return 0;
}
