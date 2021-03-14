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
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right){}
};
 
class Solution {
public:
    TreeNode* merge(TreeNode* t1, TreeNode* t2) {

        if (t1 == nullptr && t2 == nullptr) {
            return nullptr;
        }
        else if (t1 == nullptr) {
            std::cout << t2->val << std::endl;
            return t2;
        }
        else if (t2 == nullptr) {
            std::cout << t1->val << std::endl;
            return t1;
        }
        else {
            TreeNode* result_l, * result_r;
            t1->val = t1->val + t2->val;
            std::cout << t1->val << " : " << t2->val << std::endl;
            t1->left = merge(t1->left, t2->left);
            t1->right = merge(t1->right, t2->right);
            return t1;
        }
    }

    TreeNode* mergeTrees(TreeNode* t1, TreeNode* t2) {
        TreeNode* result = new TreeNode();
        return merge(t1, t2);
    }
};

int main()
{
    Solution s;
    TreeNode* one = new TreeNode(1);
    TreeNode* two = new TreeNode(2);
    TreeNode* one2 = new TreeNode(1, two, nullptr);
    cout << s.merge(one, one2);
}

