#include <iostream>
#include <vector>
#include <stack>

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
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        stack<TreeNode*> con1, con2;
        con1.push(original);
        con2.push(cloned);
        while (!con1.empty()) {
            TreeNode* recent1 = con1.top();
            TreeNode* recent2 = con2.top();
            con1.pop();
            con2.pop();
            if (recent1 == target) {
                return recent2;
            }
            if (recent1->left != nullptr) {
                con1.push(recent1->left);
                con2.push(recent2->left);
            }
            if (recent1->right != nullptr) {
                con1.push(recent1->right);
                con2.push(recent2->right);
            }
        }
        return nullptr;
    }
};

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    Solution s;
    TreeNode* target = new TreeNode(3, new TreeNode(6), new TreeNode(19));
    TreeNode* root = new TreeNode(7, new TreeNode(4), target);
    TreeNode* clone = new TreeNode(7, new TreeNode(4), new TreeNode(3, new TreeNode(6), new TreeNode(19)));
    cout << s.getTargetCopy(root, clone, target);
    
    return 0;
}
