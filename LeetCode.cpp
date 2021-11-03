#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

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
    vector<int> store;
    void dfs(TreeNode* root, int num) {
        if (root->left == nullptr && root->right == nullptr) {
            store.push_back(num * 10 + root->val);
        }
        if(root->left != nullptr){
            dfs(root->left, num * 10 + root->val);
        }
        if (root->right != nullptr) {
            dfs(root->right, num * 10 + root->val);
        }
    }

    int sumNumbers(TreeNode* root) {
        dfs(root, 0);
        int sum = 0;
        for (int i = 0; i < store.size(); i++) {
            cout << store[i] << endl;
            sum += store[i];
        }
        return sum;
    }
};

int main() {   
    Solution s;
    TreeNode* root = new TreeNode(4, new TreeNode(9, new TreeNode(5), new TreeNode(1)), new TreeNode(0));
    cout << s.sumNumbers(root);
    return 0;
}
