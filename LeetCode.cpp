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
    int deepestLeavesSum(TreeNode* root) {
        stack<TreeNode*> container;
        stack<int> height_container;
        int max_h = 0;
        container.push(root);
        height_container.push(1);
        while (!container.empty()) {
            TreeNode* recent_node = container.top();
            int height = height_container.top();
            max_h = max(max_h, height);
            container.pop();
            height_container.pop();
            if (recent_node->left != nullptr) {
                container.push(recent_node->left);
                height_container.push(height + 1);
            }
            if (recent_node->right != nullptr) {
                container.push(recent_node->right);
                height_container.push(height + 1);
            }
        }
        int result = 0;
        container.push(root);
        height_container.push(1);
        while (!container.empty()) {
            TreeNode* recent_node = container.top();
            int height = height_container.top();
            container.pop();
            height_container.pop();
            if (height == max_h) {
                result += recent_node->val;
            }
            if (recent_node->left != nullptr) {
                container.push(recent_node->left);
                height_container.push(height + 1);
            }
            if (recent_node->right != nullptr) {
                container.push(recent_node->right);
                height_container.push(height + 1);
            }
        }
        return result;
    }
};

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    Solution s;
    TreeNode* root = new TreeNode(1, new TreeNode(2, new TreeNode(4, new TreeNode(7), nullptr), new TreeNode(5)), new TreeNode(3, nullptr, new TreeNode(6, nullptr, new TreeNode(8))));
    cout << s.deepestLeavesSum(root);
    
    return 0;
}
