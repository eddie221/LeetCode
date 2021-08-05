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
    
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> result;
        if (root == nullptr) {
            return result;
        }
        else {
            vector<int> tmp;
            tmp = postorderTraversal(root->left);
            result.insert(result.end(), tmp.begin(), tmp.end());
            tmp = postorderTraversal(root->right);
            result.insert(result.end(), tmp.begin(), tmp.end());
            result.push_back(root->val);
        }
        return result;
    }
};


int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    Solution s;
    TreeNode* root = new TreeNode(1, new TreeNode(2), new TreeNode(3));
    vector<int> r = s.postorderTraversal(root);
    for (int i = 0; i < r.size(); i++) {
        cout << r[i] << endl;
    }
    return 0;
}
