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
    bool compare(TreeNode* root, TreeNode* subRoot) {
        stack<TreeNode*> root_list, subRoot_list;
        TreeNode* current = root, * subroot_current = subRoot;
        while ((current || !root_list.empty()) && (subroot_current || !subRoot_list.empty())) {
            while (current) {
                root_list.push(current);
                current = current->left;
            }
            while (subroot_current) {
                subRoot_list.push(subroot_current);
                subroot_current = subroot_current->left;
            }
            if (root_list.size() != subRoot_list.size()) {
                return false;
            }
            current = root_list.top();
            root_list.pop();
            subroot_current = subRoot_list.top();
            subRoot_list.pop();
            if (current->val != subroot_current->val) {
                return false;
            }
            current = current->right;
            subroot_current = subroot_current->right;
        }
        if (current == nullptr && subroot_current == nullptr) {
            return true;
        }
        else {
            return false;
        }
    }

    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        stack<TreeNode*> root_list;

        TreeNode* current = root;
        while (current || !root_list.empty()) {
            while (current) {
                root_list.push(current);
                current = current->left;
            }
            current = root_list.top();
            root_list.pop();
            if (compare(current, subRoot)) {
                return true;
            }
            current = current->right;
        }
        return false;;
    }
};


int main()
{
    Solution s;
    /*TreeNode* root = new TreeNode(3, new TreeNode(4, new TreeNode(1), new TreeNode(2)), new TreeNode(5));
    TreeNode* subtree = new TreeNode(4, new TreeNode(1), new TreeNode(2));*/
    TreeNode* root = new TreeNode(1, new TreeNode(2), new TreeNode(3));
    TreeNode* subtree = new TreeNode(1, new TreeNode(2), nullptr);
    cout << s.isSubtree(root, subtree) << endl;
    /* vector<bool> result;
     vector<int> nums = { 8,1,2,2,3 };
     result = s.intToRoman(nums);
     for (double r : result) {
         cout << r << endl;
     }*/
}