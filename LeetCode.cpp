#include <iostream>
#include <vector>
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
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> result;
        if (root == nullptr) {
            return result;
        }
        else {
            vector<int> tmp;
            tmp = inorderTraversal(root->left);
            result.insert(result.end(), tmp.begin(), tmp.end());
            result.push_back(root->val);
            tmp = inorderTraversal(root->right);
            result.insert(result.end(), tmp.begin(), tmp.end());
        }
        return result;
    }
};

int main()
{
    Solution s;
    TreeNode* head = new TreeNode(1, nullptr, new TreeNode(2, new TreeNode(3), nullptr));
    vector<int> r = s.inorderTraversal(head);
    for (int i = 0; i < r.size(); i++) {
        cout << r[i] << endl;
    }
    /* vector<bool> result;
     vector<int> nums = { 8,1,2,2,3 };
     result = s.intToRoman(nums);
     for (double r : result) {
         cout << r << endl;
     }*/
}