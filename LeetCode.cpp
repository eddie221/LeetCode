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
    void travel(TreeNode* root, vector<int>& result) {
        if (root != nullptr) {
            result.push_back(root->val);
            travel(root->left, result);
            travel(root->right, result);
        }
    }
 
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> result;
        if (root == nullptr) {
            return {};
        }
        travel(root, result);
        return result;
    }
};

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    Solution s;
    TreeNode* root = new TreeNode(1, new TreeNode(5, new TreeNode(2), nullptr), new TreeNode(3));
    vector<int> r = s.preorderTraversal(root);
    for (int i = 0; i < r.size(); i++) {
        cout << r[i] << endl;
    }
    return 0;
}
