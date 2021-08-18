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
    int sumOfLeftLeaves(TreeNode* root) {
        stack<TreeNode*> container;
        container.push(root);
        TreeNode* recent = root;
        int sum = 0;
        while (!container.empty()) {
            recent = container.top();
            container.pop();
            if (recent->left != nullptr) {
                if (recent->left->left == nullptr && recent->left->right == nullptr) {
                    sum += recent->left->val;
                }
                container.push(recent->left);
            }
            if (recent->right != nullptr) {
                container.push(recent->right);
            }
        }
        return sum;
    }
};

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    Solution s;
    TreeNode* root = new TreeNode(3, new TreeNode(9), new TreeNode(20, new TreeNode(15), new TreeNode(7)));
    cout << s.sumOfLeftLeaves(root);
    return 0;
}
