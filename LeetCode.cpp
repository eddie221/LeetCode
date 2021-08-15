#include <iostream>
#include <vector>
#include <string>


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

    vector<string> binaryTreePaths(TreeNode* root) {
        if (root == nullptr) {
            return { "" };
        }
        vector<string> r, tmp;
        cout << root->val << " ";
        if (root->left == nullptr && root->right == nullptr) {
            return { to_string(root->val) };
        }

        tmp = binaryTreePaths(root->left);
        for (int i = 0; i < tmp.size(); i++) {
            if (tmp[i] != "") {
                r.push_back(to_string(root->val) + "->" + tmp[i]);
            }
        }
        tmp = binaryTreePaths(root->right);
        for (int i = 0; i < tmp.size(); i++) {
            if (tmp[i] != "") {
                r.push_back(to_string(root->val) + "->" + tmp[i]);
            }
        }
        return r;
    }
};

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    Solution s;
    TreeNode* root = new TreeNode(1, new TreeNode(2, new TreeNode(5), nullptr), new TreeNode(3));
    vector<string> r = s.binaryTreePaths(root);
    for (int i = 0; i < r.size(); i++) {
        cout << r[i] << endl;
    }
    return 0;
}
