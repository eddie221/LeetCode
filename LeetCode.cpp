#include <iostream>
#include <queue>

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
    bool isSymmetric(TreeNode* root) {
        if (root == nullptr) {
            return true;
        }
        else {
            return isSymemtric(root->left, root->right);
        }
    }
    
    bool isSymemtric(TreeNode* left, TreeNode* right) {
        if (left == nullptr && right == nullptr) {
            return true;
        }
        else if ((left == nullptr && right != nullptr) || (left != nullptr && right == nullptr) || (left->val != right->val)) {
            return false;
        }
        else {
            return isSymemtric(left->left, right->right) && isSymemtric(left->right, right->left);
        }
    }
};

int main()
{
    Solution s;
    
    TreeNode* three1 = new TreeNode(3);
    TreeNode* three2 = new TreeNode(3);
    TreeNode* four1 = new TreeNode(4);
    TreeNode* four2 = new TreeNode(4);
    TreeNode* two1 = new TreeNode(2, three1, four1);
    TreeNode* two2 = new TreeNode(2, four2, three2);
    TreeNode* one = new TreeNode(1, two1, two2);
    cout << s.isSymmetric(one);
    /*while (r != nullptr) {
        cout << r->val << endl;
        r = r->next;
    }*/
    /*vector<int> result;
    vector<int> nums = { 8,1,2,2,3 };
    result = s.smallerNumbersThanCurrent(nums);
    for (double r : result) {
        cout << r << endl;
    }*/
}

