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
    bool travel(TreeNode* p, TreeNode* q) {
        if (p == nullptr && q == nullptr) {
            return true;
        }
        else {
            if (p == nullptr || q == nullptr) {
                return false;
            }
            else if (p->val == q->val) {
                return travel(p->right, q->right) && travel(p->left, q->left);
            }
        }
        return false;
    }

    bool isSameTree(TreeNode* p, TreeNode* q) {
        return travel(p, q);
    }
};
int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    Solution s;
    TreeNode* root1 = new TreeNode(1, new TreeNode(5, new TreeNode(2), nullptr), new TreeNode(3));
    TreeNode* root2 = new TreeNode(1, new TreeNode(5, new TreeNode(2), new TreeNode(3)), nullptr);
    cout << s.isSameTree(root1, root2);
    return 0;
}
